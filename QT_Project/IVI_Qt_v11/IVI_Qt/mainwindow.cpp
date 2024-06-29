#include "mainwindow.h"
//#include "./ui_mainwindow.h"
#include "systeminterface.h"

#include "availabletargets.h"
#include "targetconfiguration.h"
#include "SDconfiguration.h"


#include "ui_mainwindow.h"
/* System Macros */
#define COMMAND_SUCCEDED    0

/* Stack widget pages for main screen */
#define HOME_PAGE_INDEX 0
#define VIDEO_PAGE_INDEX 1
#define MUSIC_PAGE_INDEX 2
#define BLUETOOTH_PAGE_INDEX 3
#define AIR_CONDITIONER_PAGE_INDEX 4
#define CALCULATOR_PAGE_INDEX 6
#define SETTINGS_PAGE_INDEX 7
#define VIDEO_SHOW_PAGE 8
#define CALENDAR_SHOW_PAGE 5

/* Multimedia Macros */
#define NO_FLASH_DETECTED   0
#define FLASH_DETECTED      1
#define MAX_VOLUME          100
#define MIN_VOLUME          0


/* Bluetooth Macros */
#define BLUETOOTH_CONNECTED 1
#define BLUETOOTH_NOT_CONNECTED 2

/* General variables */
int currentVolume = 50;

/* Multimedia variables */
int volumeStep = 10;
int flashStatus = NO_FLASH_DETECTED;

/* Music variables */
string songsExt = ".mp3";
int playingSongFlag = 0;

/* Video variables */
string videosExt = ".mp4";
int playingVideoFlag = 0;
long long int videoStep = 10000;

/* Bluetooth variables */
int bluetoothDeviceConnected = BLUETOOTH_NOT_CONNECTED;


/* system function*/
void initialCommands(void);
string extractUsb (string devices);

/*MainWindow Constructor*/
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , networkManager(new QNetworkAccessManager(this))
    , apiKey("11d23c4eecb578085942007e51be6b02") // Your actual API key
    , city("Cairo,EG") // City in Egypt
    , firstOperand(0)
    , secondOperand(0)
    , waitingForSecondOperand(false)

{
    /* Sets up the user interface defined in the mainwindow.ui*/
    ui->setupUi(this);

    /* Temprature setup */
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTemperature()));
    connect(networkManager, &QNetworkAccessManager::finished, this, &MainWindow::onTemperatureDataReceived);
    timer->start(60000); // Update every minute
    updateTemperature();

    /* Time and date setup */
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(updateTime()));
    timer->start();

    /* Flash USB detection */
    /* Creates and connects another timer to the updateFlashStatus() slot to detect USB flash drives.*/
    flashDetectionTimer = new QTimer(this);
    connect(flashDetectionTimer,SIGNAL(timeout()),this,SLOT(updateFlashStatus()));
    flashDetectionTimer->start(1000);


    /* Enable required initial daemons */
    initialCommands();
    // Connect the combo box signal to the slot
    connect(ui->themeComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(on_themeComboBox_currentIndexChanged(int)));

    // Apply default theme
    applyTheme(ui->themeComboBox->currentIndex());


    /* Setting home page as default page: sets the displayed page of the QStackedWidget to the home page*/
    ui->pagesSwitch->setCurrentIndex(HOME_PAGE_INDEX);

    /* Connecting home buttons to goBackHomeFunction */
    connect(ui->homeButtonVd,SIGNAL(clicked()),SLOT(goBackHome()));
    connect(ui->homeButtonMs,SIGNAL(clicked()),SLOT(goBackHome()));
    connect(ui->homeButtonBl,SIGNAL(clicked()),SLOT(goBackHome()));
    connect(ui->homeButtonSt,SIGNAL(clicked()),SLOT(goBackHome()));
    connect(ui->homeButtonAC,SIGNAL(clicked()),SLOT(goBackHome()));
    connect(ui->homeButtonCL,SIGNAL(clicked()),SLOT(goBackHome()));
    connect(ui->homeButtonCALC,SIGNAL(clicked()),SLOT(goBackHome()));

    /* Setting home buttons icons */

    ui->videoButton->setIcon(QIcon(":/mainIcons/media/Videos_icon.png"));
    ui->videoButton->setIconSize(QSize(200,100));

    ui->musicButton->setIcon(QIcon(":/mainIcons/media/Music_icon.png"));
    ui->musicButton->setIconSize(QSize(100,100));

    ui->bluetoothButton->setIcon(QIcon(":/mainIcons/media/BL_icon.png"));
    ui->bluetoothButton->setIconSize(QSize(260,240));

    ui->settingsButton->setIcon(QIcon(":/mainIcons/media/Settings_icon.png"));
    ui->settingsButton->setIconSize(QSize(170,100));

    ui->acButton->setIcon(QIcon(":/mainIcons/media/AC_icon.png"));
    ui->acButton->setIconSize(QSize(100,90));

    ui->youtubeButton->setIcon(QIcon(":/mainIcons/media/Youtube_icon.png"));
    ui->youtubeButton->setIconSize(QSize(90,130));

    ui->calcButton->setIcon(QIcon(":/mainIcons/media/Calc_icon.png"));
    ui->calcButton->setIconSize(QSize(100,100));

    ui->calendarButton->setIcon(QIcon(":/mainIcons/media/calendar_icon.png"));
    ui->calendarButton->setIconSize(QSize(210,110));



    ui->homeButtonVd->setIcon(QIcon(":/mainIcons/media/home_icon.png"));
    ui->homeButtonVd->setIconSize(QSize(50,50));
    ui->homeButtonMs->setIcon(QIcon(":/mainIcons/media/home_icon.png"));
    ui->homeButtonMs->setIconSize(QSize(50,50));
    ui->homeButtonBl->setIcon(QIcon(":/mainIcons/media/home_icon.png"));
    ui->homeButtonBl->setIconSize(QSize(50,50));
    ui->homeButtonSt->setIcon(QIcon(":/mainIcons/media/home_icon.png"));
    ui->homeButtonSt->setIconSize(QSize(50,50));
    ui->homeButtonAC->setIcon(QIcon(":/mainIcons/media/home_icon.png"));
    ui->homeButtonAC->setIconSize(QSize(50,50));
    ui->homeButtonCL->setIcon(QIcon(":/mainIcons/media/home_icon.png"));
    ui->homeButtonCL->setIconSize(QSize(50,50));



    /* Setting default music pages */
    ui->runningMusicGroup->hide();
    ui->currentRunningMediaGroup->hide();


    /* Setting music control buttons icons */
    ui->playButton->setIcon(QIcon(":/musicControl/media/play_icon.png"));
    ui->playButton->setIconSize(QSize(40,40));
    ui->forwardButton->setIcon(QIcon(":/musicControl/media/forward_icon.png"));
    ui->forwardButton->setIconSize(QSize(40,40));
    ui->backwardButton->setIcon(QIcon(":/musicControl/media/backward_icon.png"));
    ui->backwardButton->setIconSize(QSize(40,40));
    ui->stopButton->setIcon(QIcon(":/musicControl/media/stop_icon.png"));
    ui->stopButton->setIconSize(QSize(40,40));
    ui->shuffleButton->setIcon(QIcon(":/musicControl/media/shuffle_icon.png"));
    ui->shuffleButton->setIconSize(QSize(40,40));
    ui->repeatButton->setIcon(QIcon(":/musicControl/media/repeat_icon.png"));
    ui->repeatButton->setIconSize(QSize(40,40));
    ui->volumeUpButton->setIcon(QIcon(":/musicControl/media/volumeUp_icon.png"));
    ui->volumeUpButton->setIconSize(QSize(30,30));
    ui->volumeDownButton->setIcon(QIcon(":/musicControl/media/volumeDown_icon.png"));
    ui->volumeDownButton->setIconSize(QSize(30,30));

    /* Music player signals connections */
    connect(ui->runningSongsList, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(onSongListItemClicked(QListWidgetItem*)));
    connect(playList,SIGNAL(currentIndexChanged(int)),SLOT(onSongChange()));

    /* Setting default video pages */
    ui->runningVideoGroup->hide();
    connect(ui->runningVideosList, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(onVideoListItemClicked(QListWidgetItem*)));

    /* Video display setup */
    videoPlayer->setVideoOutput(videoGraphicsItem);
    videoScene->addItem(videoGraphicsItem);
    ui->videoView->setScene(videoScene);
    videoGraphicsItem->setSize(QSize(900,380));

    ui->playVideoButton->setIcon(QIcon(":/musicControl/media/play_icon.png"));
    ui->playVideoButton->setIconSize(QSize(40,40));
    ui->forwardVideoButton->setIcon(QIcon(":/musicControl/media/forward_icon.png"));
    ui->forwardVideoButton->setIconSize(QSize(40,40));
    ui->backwardVideoButton->setIcon(QIcon(":/musicControl/media/backward_icon.png"));
    ui->backwardVideoButton->setIconSize(QSize(40,40));
    ui->stopVideoButton->setIcon(QIcon(":/musicControl/media/stop_icon.png"));
    ui->stopVideoButton->setIconSize(QSize(40,40));
    ui->volumeUpVideoButton->setIcon(QIcon(":/musicControl/media/volumeUp_icon.png"));
    ui->volumeUpVideoButton->setIconSize(QSize(30,30));
    ui->volumeDownVideoButton->setIcon(QIcon(":/musicControl/media/volumeDown_icon.png"));
    ui->volumeDownVideoButton->setIconSize(QSize(30,30));
    ui->goTovideosListButton->setIcon(QIcon(":/videoIcons/media/back_icon.png"));
    ui->goTovideosListButton->setIconSize(QSize(30,30));


    /* Settings buttons icons */
    ui->doneTimeDateButton->setIcon(QIcon(":/settingsIcons/media/done_icon.png"));
    ui->doneTimeDateButton->setIconSize(QSize(50,50));
    ui->cancelTimeDateButton->setIcon(QIcon(":/settingsIcons/media/cancel_icon.png"));
    ui->cancelTimeDateButton->setIconSize(QSize(50,50));

    ui->setTimeDateGroup->hide();
    ui->settingsMainGroup->show();

    /* Bluetooth setup */
    ui->bluetoothIconLabel->hide();
    enableBluetooth();

    /* Check bluetooth connections */
    bluetoothDetectionTimer = new QTimer(this);
    connect(bluetoothDetectionTimer,SIGNAL(timeout()),this,SLOT(updatBluetoothDevices()));
    bluetoothDetectionTimer->start();

    /* Air conditioner icons */
    ui->button1->setIcon(QIcon(":/ACIcons/media/ac.png"));
    ui->button1->setIconSize(QSize(100,100));

    ui->button2->setIcon(QIcon(":/ACIcons/media/ca.png"));
    ui->button2->setIconSize(QSize(100,100));

    ui->button3->setIcon(QIcon(":/ACIcons/media/Front.png"));
    ui->button3->setIconSize(QSize(100,100));

    ui->button4->setIcon(QIcon(":/ACIcons/media/Rear.png"));
    ui->button4->setIconSize(QSize(100,100));

    ui->button5->setIcon(QIcon(":/ACIcons/media/onoff.png"));
    ui->button5->setIconSize(QSize(100,100));


    slider = findChild<QSlider *>(QString("slider"));
    valueLabel = findChild<QLabel *>(QString("valueLabel"));

    // Set slider range and initial value
    slider->setMinimum(0);
    slider->setMaximum(20); // 20 steps from 0 to 20
    slider->setValue(10);   // Start at the middle

    connect(slider, &QSlider::valueChanged, this, &MainWindow::handleSliderMoved);

    for (int i = 0; i < 5; ++i) {
        QPushButton *button = findChild<QPushButton *>(QString("button%1").arg(i + 1));
        QLabel *ledLabel = findChild<QLabel *>(QString("led%1").arg(i + 1));
        ledLabel->setFixedSize(20, 20);
        ledLabel->setStyleSheet("QLabel { background-color : gray; border-radius: 10px; }");

        connect(button, &QPushButton::clicked, [=]() { handleButtonPress(i); });

        ledLabels[i] = ledLabel;
    }

    // Initialize label value
    int initialValue = slider->value() + 15;
    valueLabel->setText(QString::number(initialValue));

    /* calculator setup */

    // Connect digit buttons
    connect(ui->button_0, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button_1, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button_2, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button_3, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button_4, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button_5, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button_6, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button_7, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button_8, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button_9, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    connect(ui->button_dot, &QPushButton::clicked, this, &MainWindow::onDigitClicked);
    // Connect operator buttons
    connect(ui->button_plus, &QPushButton::clicked, this, &MainWindow::onOperatorClicked);
    connect(ui->button_minus, &QPushButton::clicked, this, &MainWindow::onOperatorClicked);
    connect(ui->button_multiply, &QPushButton::clicked, this, &MainWindow::onOperatorClicked);
    connect(ui->button_divide, &QPushButton::clicked, this, &MainWindow::onOperatorClicked);
    // Connect equals and clear buttons
    connect(ui->button_equals, &QPushButton::clicked, this, &MainWindow::onEqualsClicked);
    connect(ui->button_clear, &QPushButton::clicked, this, &MainWindow::onClearClicked);

    /* calendar setup */
    connect(ui->calendarWidget, &QCalendarWidget::selectionChanged,
            this, &MainWindow::on_calendarWidget_selectionChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}
/*****************************************************************************************************************************/
/************************************************    General Methods    ******************************************************/
/*****************************************************************************************************************************/


void initialCommands()
{
    const char *cmd;
    /* initializes the PulseAudio server*/
  /*  string enablePulseAudioCMD = "pulseaudio -D 2> /dev/null";
    cmd = enablePulseAudioCMD.c_str();
    system(cmd);*/
    /* ensures that the Bluetooth device is unblocked*/
    string unblockBluetoothCMD = "rfkill unblock bluetooth";
    cmd = unblockBluetoothCMD.c_str();
    system(cmd);

}

string extractUsb(string devices)
{
    string dev,devType;
    string checkDevTypeCMD;
    int start, devNameLen;

    devNameLen = 4;
    start = 0;

    while (start<devices.length())
    {
        dev = devices.substr(start,devNameLen);

        checkDevTypeCMD = "udevadm info --query=all --name=" +dev + " | grep usb";
        devType = GetStdoutFromCommand(checkDevTypeCMD);
        if (devType.length()!=0)
        {
            return dev;
        }

        start = start + devNameLen;
    }
    return devType;
}

/* Time and date updating method */
void MainWindow::updateTime()
{
    currentDate = QDate::currentDate();
    date = currentDate.toString();
    ui->dateText->setText(date);
    ui->dateText->setAlignment(Qt::AlignRight);

    currentTime = QTime::currentTime();
    time = currentTime.toString("hh:mm AP");
    ui->timeText->setText(time);
    ui->timeText->setAlignment(Qt::AlignRight);

    ui->setTimeDateButton->setText(time + ", " + date);

}

/* Mutual home button in every page */
void MainWindow::goBackHome (void)
{
    ui->pagesSwitch->setCurrentIndex(HOME_PAGE_INDEX);
}

/*****************************************************************************************************************************/
/**********************************************    Multimedia Methods    *****************************************************/
/*****************************************************************************************************************************/


/* Flash status updating method */
void MainWindow::updateFlashStatus()
{
    int systemStatus;
    string listDevicesCMD, mkdirCMD, rmdirCMD;
    string devicesConnected;
    const char *cmd;

    /* Check if any flash usb is connected */

    listDevicesCMD = "ls /dev/ | grep sd[a-z][0-9]";

    devicesConnected = GetStdoutFromCommand(listDevicesCMD);

    devicesConnected = extractUsb(devicesConnected);

    /* New usb is connected */
    if (!devicesConnected.empty() && flashStatus == NO_FLASH_DETECTED)
    {
        //flashStatus = FLASH_DETECTED;
        ui->noFlashGroupMusic->hide();
        ui->noFlashGroupVideo->hide();
        ui->runningMusicGroup->show();
        ui->runningVideoGroup->show();
        // Check if the USB is mounted
        string mountCheckCmd = "mount | grep "+SD_Path;
        string mountStatus = GetStdoutFromCommand(mountCheckCmd);

        if (!mountStatus.empty()) {
            flashStatus = FLASH_DETECTED;
            updateSongsList();
            updateVideosList();
        } else {
            flashStatus = NO_FLASH_DETECTED;
        }
    }
    /* Current usb is removed */
    else if (devicesConnected.empty() && flashStatus == FLASH_DETECTED)
    {
        flashStatus = NO_FLASH_DETECTED;

        /* In case of device unmounted successfully then update songs */
        ui->runningMusicGroup->hide();
        ui->noFlashGroupMusic->show();
        updateSongsList();
        updateVideosList();
    }

    /* No usb is connected */
    else if (devicesConnected.empty() && flashStatus == NO_FLASH_DETECTED)
    {
        ui->runningMusicGroup->hide();
        ui->runningVideoGroup->hide();
        ui->noFlashGroupMusic->show();
        ui->noFlashGroupVideo->show();
    }


    if (playingSongFlag == 1)
    {
        ui->currentRunningMediaGroup->show();
        ui->runningMediaLabel->setStyleSheet("image: url(:/mainIcons/media/music_icon.png)");
    }
    else if (playingVideoFlag == 1)
    {
        ui->currentRunningMediaGroup->show();
        ui->runningMediaLabel->setStyleSheet("image: url(:/mainIcons/media/video_icon.png)");
    }
    else
    {
        ui->currentRunningMediaGroup->hide();
    }

}



/*****************************************************************************************************************************/
/*************************************************    Music Methods    *******************************************************/
/*****************************************************************************************************************************/

void MainWindow::on_musicButton_clicked()
{
    ui->pagesSwitch->setCurrentIndex(MUSIC_PAGE_INDEX);
}

/* Updating songs list method */
void MainWindow::updateSongsList()
{
    int currentSongsNumber, start,end;
    string songsListCount, songsList, songPath,songName;
    string listingSongsNumCMD, listingSongsCMD;

    currentSongsNumber = ui->runningSongsList->count();

    if (flashStatus == NO_FLASH_DETECTED)
    {
        if (currentSongsNumber != 0)
        {
            ui->runningSongsList->clear();
            playList->clear();
        }
    }
    else
    {
        listingSongsNumCMD = "ls "+SD_Path+" | grep .mp3 | wc -l";
        songsListCount = GetStdoutFromCommand(listingSongsNumCMD);


        if (songsListCount == "0")
        {
            ui->runningSongsList->hide();
            ui->zeroSongsGroup->show();
        }
        else
        {
            ui->zeroSongsGroup->hide();
            ui->runningSongsList->show();

            /* Just to make sure that any old displayed sone is removed */
            ui->runningSongsList->clear();

            /* Appned songs to music playlist and songs list in display */

            listingSongsCMD = "find "+SD_Path+ " -type f -name *.mp3";
            songsList = GetStdoutFromCommand(listingSongsCMD);

            start = 0;
            while (start < songsList.length())
            {
                end = songsList.find(songsExt,start);
                songPath = songsList.substr(start,(end-start));
                songPath = songPath + songsExt;

                songName = songPath.substr(songPath.rfind('/')+1, songPath.length());

                playList->addMedia(QUrl::fromLocalFile(QString::fromStdString(songPath)));

                ui->runningSongsList->addItem( QString::fromStdString(songName));
                ui->runningSongsList->setSpacing(7);

                start = end + songsExt.length();

            }

            playList->setPlaybackMode(QMediaPlaylist::Sequential);

            musicPlayer->setPlaylist(playList);
        }
    }
}

void MainWindow::onSongListItemClicked(QListWidgetItem* item)
{
    int chosenSong = ui->runningSongsList->row(item);
    playList->setCurrentIndex(chosenSong);

    if (playingSongFlag == 0)
    {
        playSong();
    }
}

void MainWindow::onSongChange()
{
    int songIndex;
    songIndex = playList->currentIndex();
    if (songIndex >= 0 && songIndex < playList->mediaCount())
    {
        ui->runningSongsList->item(songIndex)->setSelected(true);
        ui->runningSongsList->scrollToItem(ui->runningSongsList->item(songIndex),QAbstractItemView::EnsureVisible);
        ui->currentRunningMediaLabel->setText(ui->runningSongsList->item(playList->currentIndex())->text());
    }


}

void MainWindow::playSong()
{
    playingSongFlag = 1;

    ui->currentRunningMediaLabel->setText(ui->runningSongsList->item(playList->currentIndex())->text());

    musicPlayer->play();
    ui->playButton->setIcon(QIcon(":/musicControl/media/pause_icon.png"));
}

void MainWindow::playToggle()
{
    playingSongFlag = 0;

    ui->playButton->setIcon(QIcon(":/musicControl/media/play_icon.png"));
}

/* Music control buttons */
void MainWindow::on_playButton_clicked()
{
    if (playingSongFlag == 0)
    {
        playSong();
    }
    else
    {
        musicPlayer->pause();
        playToggle();
    }
}

void MainWindow::on_stopButton_clicked()
{

    if (playingSongFlag == 1)
    {
        musicPlayer->stop();

        playToggle();
    }
}

void MainWindow::on_forwardButton_clicked()
{
    playList->next();


    if (playList->currentIndex() < 0 && (playList->playbackMode() == QMediaPlaylist::Sequential))
    {
        playToggle();
    }
}

void MainWindow::on_backwardButton_clicked()
{
    playList->previous();

    if (playList->currentIndex() < 0 && (playList->playbackMode() == QMediaPlaylist::Sequential))
    {
        playToggle();
    }
}

void MainWindow::on_repeatButton_clicked()
{
    static int toggleRepeat = 0;
    /*
     * 0 -> Repeat all mode
     * 1 -> Repeat once
     * 2 -> No repeat
 */
    if (toggleRepeat == 0)
    {

        toggleRepeat = 1;

        playList->setPlaybackMode(QMediaPlaylist::Loop);
        ui->repeatButton->setIcon(QIcon(":/musicControl/media/repeatPressed_icon.png"));

    }
    else if (toggleRepeat == 1)
    {

        toggleRepeat = 2;
        playList->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
        ui->repeatButton->setIcon(QIcon(":/musicControl/media/repeatOnce_icon.png"));

    }
    else
    {
        toggleRepeat =0;
        playList->setPlaybackMode(QMediaPlaylist::Sequential);
        ui->repeatButton->setIcon(QIcon(":/musicControl/media/repeat_icon.png"));


    }

}

void MainWindow::on_shuffleButton_clicked()
{
    static int toggleShuffle = 0;

    if (toggleShuffle == 0)
    {
        toggleShuffle = 1;

        playList->setPlaybackMode(QMediaPlaylist::Random);
        ui->shuffleButton->setIcon(QIcon(":/musicControl/media/shufflePressed_icon.png"));
    }
    else
    {
        toggleShuffle = 0;

        playList->setPlaybackMode(QMediaPlaylist::Sequential);
        ui->shuffleButton->setIcon(QIcon(":/musicControl/media/shuffle_icon.png"));
    }


}

void MainWindow::on_volumeDownButton_clicked()
{
    currentVolume -= volumeStep;
    if (currentVolume < MIN_VOLUME)
    {
        currentVolume = MIN_VOLUME;
    }

    musicPlayer->setVolume(currentVolume);
}

void MainWindow::on_volumeUpButton_clicked()
{

    currentVolume += volumeStep;
    if (currentVolume > MAX_VOLUME)
    {
        currentVolume = MAX_VOLUME;
    }

    musicPlayer->setVolume(currentVolume);
}


/*****************************************************************************************************************************/
/************************************************    Video Methods    *****************************************************/
/*****************************************************************************************************************************/

void MainWindow::on_videoButton_clicked()
{
    ui->pagesSwitch->setCurrentIndex(VIDEO_PAGE_INDEX);

}

void MainWindow::updateVideosList()
{
    int currentVideoNumber, start,end;
    string videosListCount, videosList, videoPath,videoName;
    string listingVideosNumCMD, listingVideosCMD;

    currentVideoNumber = ui->runningVideosList->count();

    if (flashStatus == NO_FLASH_DETECTED)
    {
        if (currentVideoNumber != 0)
        {
            ui->runningVideosList->clear();
            videoPlayList->clear();
        }
    }
    else
    {
        listingVideosNumCMD = "ls "+SD_Path+" | grep .mp3 | wc -l";
        videosListCount = GetStdoutFromCommand(listingVideosNumCMD);


        if (videosListCount == "0")
        {
            ui->runningVideosList->hide();
            ui->zeroVideosGroup->show();
        }
        else
        {
            ui->zeroVideosGroup->hide();
            ui->runningVideosList->show();

            /* Just to make sure that any old displayed sone is removed */
            ui->runningVideosList->clear();

            /* Appned songs to music playlist and songs list in display */

            listingVideosCMD = "find "+SD_Path+ " -type f -name *.mp4";
            videosList = GetStdoutFromCommand(listingVideosCMD);

            start = 0;
            while (start < videosList.length())
            {
                end = videosList.find(videosExt,start);
                videoPath = videosList.substr(start,(end-start));
                videoPath = videoPath + videosExt;

                videoName = videoPath.substr(videoPath.rfind('/')+1, videoPath.length());

                videoPlayList->addMedia(QUrl::fromLocalFile(QString::fromStdString(videoPath)));

                ui->runningVideosList->addItem( QString::fromStdString(videoName));
                ui->runningVideosList->setSpacing(7);

                start = end + videosExt.length();
            }

            videoPlayList->setPlaybackMode(QMediaPlaylist::CurrentItemOnce);

            videoPlayer->setPlaylist(videoPlayList);
        }
    }
}

void MainWindow::playVideo()
{

    /* Stop music first*/
    if (playingSongFlag == 1)
    {
        musicPlayer->stop();

        playToggle();
    }

    playingVideoFlag = 1;
    videoPlayer->play();
    ui->playVideoButton->setIcon(QIcon(":/musicControl/media/pause_icon.png"));

}

void MainWindow::stopVideo()
{
    playingVideoFlag = 0;
    videoPlayer->pause();
    ui->playVideoButton->setIcon(QIcon(":/musicControl/media/play_icon.png"));

}

void MainWindow::onVideoListItemClicked(QListWidgetItem* item)
{
    int chosenVideo = ui->runningVideosList->row(item);

    if (chosenVideo != videoPlayList->currentIndex())
    {
        videoPlayList->setCurrentIndex(chosenVideo);
    }

    ui->pagesSwitch->setCurrentIndex(VIDEO_SHOW_PAGE);

    ui->currentRunningMediaLabel->setText(ui->runningVideosList->item(chosenVideo)->text());

    playVideo();
}

void MainWindow::on_goTovideosListButton_clicked()
{
    /* Stop any running video first */

    stopVideo();

    ui->pagesSwitch->setCurrentIndex(VIDEO_PAGE_INDEX);
}

void MainWindow::on_playVideoButton_clicked()
{

    if (playingVideoFlag == 0)
    {
        playVideo();
    }
    else
    {
        stopVideo();
    }

}

void MainWindow::on_stopVideoButton_clicked()
{

    /* To keep the video preview instead of black screen that results of stop function */
    videoPlayList->setCurrentIndex(videoPlayList->currentIndex());

    stopVideo();
}

void MainWindow::on_backwardVideoButton_clicked()
{
    long long int pos = videoPlayer->position();

    pos = pos - videoStep;

    if (pos < 0)
    {
        pos = 0;
    }

    videoPlayer->setPosition(pos);

}

void MainWindow::on_forwardVideoButton_clicked()
{
    long long int pos = videoPlayer->position();

    pos = pos + videoStep;

    if (pos >= videoPlayer->duration())
    {
        videoPlayList->setCurrentIndex(videoPlayList->currentIndex());
        stopVideo();
    }
    else
    {
        videoPlayer->setPosition(pos);
    }

}

void MainWindow::on_volumeDownVideoButton_clicked()
{
    currentVolume -= volumeStep;
    if (currentVolume < MIN_VOLUME)
    {
        currentVolume = MIN_VOLUME;
    }

    videoPlayer->setVolume(currentVolume);
}

void MainWindow::on_volumeUpVideoButton_clicked()
{
    currentVolume += volumeStep;
    if (currentVolume > MAX_VOLUME)
    {
        currentVolume = MAX_VOLUME;
    }

    videoPlayer->setVolume(currentVolume);
}


/*****************************************************************************************************************************/
/************************************************    Bluetooth Methods    *****************************************************/
/*****************************************************************************************************************************/

void MainWindow::on_bluetoothButton_clicked()
{
    ui->pagesSwitch->setCurrentIndex(BLUETOOTH_PAGE_INDEX);

}

void MainWindow::updatBluetoothDevices()
{
    string listConnectedDevicesCMD, getDeviceNameCMD;
    string listConnectedDevices, deviceAddress,deviceName, zeroConnectedDevices;
    int start = 0, end;
    regex macRegex("[a-fA-F0-9:]{17}|[a-fA-F0-9]{12}");
    smatch macMatch;


    listConnectedDevicesCMD = "hcitool con";

    listConnectedDevices = GetStdoutFromCommand (listConnectedDevicesCMD);

    end = listConnectedDevices.find(":",start);

    if (end == (listConnectedDevices.length()-1))
    {
        /* No bluetooth devices are connected */
        bluetoothDeviceConnected = BLUETOOTH_NOT_CONNECTED;

        zeroConnectedDevices = "Connect Your Device!";

        ui->connectedBluetoothDeviceLabel->setText(QString::fromStdString(zeroConnectedDevices));
        ui->bluetoothIconLabel->hide();
    }
    else if (end != (listConnectedDevices.length()-1) && bluetoothDeviceConnected == BLUETOOTH_NOT_CONNECTED)
    {
        bluetoothDeviceConnected = BLUETOOTH_CONNECTED;
        regex_search(listConnectedDevices, macMatch, macRegex);

        for (auto x : macMatch)
            deviceAddress = x ;

        getDeviceNameCMD = "hcitool name " + deviceAddress;
        deviceName = GetStdoutFromCommand(getDeviceNameCMD);
        deviceName = "Connected Device: " + deviceName;
        ui->connectedBluetoothDeviceLabel->setText(QString::fromStdString(deviceName));
        ui->bluetoothIconLabel->show();
    }
    else
    {
        /* Do nothing */
    }

}

void MainWindow::enableBluetooth()
{
    string enableBluetoothCMD;
    const char *cmd;
    int systemStatus;


#if TARGET_DEV == DEV_RPI
    enableBluetoothCMD = "bluetoothctl power on && bluetoothctl discoverable on && bluetoothctl pairable on && bluetoothctl agent NoInputNoOutput";
#endif
#if TARGET_DEV == DEV_PC
    enableBluetoothCMD = "service bluetooth start && bt-agent --capability=NoInputNoOutput > /dev/null &";
    cmd = enableBluetoothCMD.c_str();
    systemStatus = system (cmd);
#endif

}


/*****************************************************************************************************************************/
/************************************************    Settings Methods    *****************************************************/
/*****************************************************************************************************************************/

void MainWindow::on_settingsButton_clicked()
{
    ui->setTimeDateGroup->hide();
    ui->settingsMainGroup->show();

    ui->pagesSwitch->setCurrentIndex(SETTINGS_PAGE_INDEX);
}

void MainWindow::on_themeComboBox_currentIndexChanged(int index)
{
    applyTheme(index);
}

void MainWindow::applyTheme(int index)
{
    switch(index)
    {
    case 0: // Dark Theme

        MainWindow::setStyleSheet("background:url(:/mainBG/media/darkBackground.png)");
        break;
    case 1: // Pattern Theme
        MainWindow::setStyleSheet("background:url(:/mainBG/media/pattern.png)");
        break;
    case 2: // Galaxy
        MainWindow::setStyleSheet("background:url(:/mainBG/media/galaxy.jpg)");
        break;
    case 3: // colorful
        MainWindow::setStyleSheet("background:url(:/mainBG/media/colorfulBackground.jpeg)");
    default:
        MainWindow::setStyleSheet("background:url(:/mainBG/media/colorfulBackground.jpeg)");
        break;
    }
}

void MainWindow::on_setTimeDateButton_clicked()
{
    ui->settingsMainGroup->hide();
    ui->setTimeDateGroup->show();
}

void MainWindow::on_doneTimeDateButton_clicked()
{
    QString updatedTime, updatedDate;
    std::string updateTimeDateCMD;
    const char *cmd;

    // Get updated time and date from the UI
    QTime time = ui->updatedTimeValue->time();
    QDate date = ui->updatedDateValue->date();

    // Ensure both date and time are formatted using English numerals
    updatedTime = QLocale(QLocale::English).toString(time, "HH:mm:ss");
    updatedDate = QLocale(QLocale::English).toString(date, "dd MMM yyyy");
    // Combine date and time
    QString updatedDateTime = updatedDate + " " + updatedTime;
    // Format the command with sudo
    updateTimeDateCMD = "sudo date -s '" + updatedDateTime.toStdString() + "'";
    cmd = updateTimeDateCMD.c_str();
    // Debug output to verify the command
    qDebug() << "Command: " << QString::fromStdString(updateTimeDateCMD);
    // Execute the command
    system(cmd);
    ui->setTimeDateGroup->hide();
    ui->settingsMainGroup->show();
}

void MainWindow::on_cancelTimeDateButton_clicked()
{
    ui->setTimeDateGroup->hide();
    ui->settingsMainGroup->show();
}

/*****************************************************************************************************************************/
/************************************************    Temprature Methods    *****************************************************/
/*****************************************************************************************************************************/

void MainWindow::updateTemperature()
{
    QString url = QString("http://api.openweathermap.org/data/2.5/weather?q=%1&appid=%2&units=metric").arg(city, apiKey);
    networkManager->get(QNetworkRequest(QUrl(url)));
}

void MainWindow::onTemperatureDataReceived(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray response = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(response);
        QJsonObject jsonObj = jsonDoc.object();
        double temperature = jsonObj["main"].toObject()["temp"].toDouble();
        ui->TempValueLabel->setText(QString::number(temperature) + " °C");
    }
    else
    {
        ui->TempValueLabel->setText("25°C");
    }
    reply->deleteLater();
}
/*****************************************************************************************************************************/
/************************************************    youtube Methods    *****************************************************/
/*****************************************************************************************************************************/


void MainWindow::on_youtubeButton_clicked()
{
    QString link = "https://www.youtube.com";
    QDesktopServices::openUrl(QUrl(link));
}
/*****************************************************************************************************************************/
/************************************************    AC Methods    *****************************************************/
/*****************************************************************************************************************************/

void MainWindow::handleButtonPress(int buttonIndex) {
    // Toggle LED state
    bool newState = !ledLabels[buttonIndex]->property("state").toBool();
    ledLabels[buttonIndex]->setProperty("state", newState);
    ledLabels[buttonIndex]->setStyleSheet(newState
                                              ? "QLabel { background-color : green; border-radius: 10px; }"
                                              : "QLabel { background-color : gray; border-radius: 10px; }");
}

void MainWindow::handleSliderMoved(int value) {
    int labelValue = value + 15; // Map slider value (0-20) to label value (15-35)
    ui->valueLabel->setText(QString::number(labelValue)+ " °C");
}


void MainWindow::on_acButton_clicked()
{
    ui->pagesSwitch->setCurrentIndex(AIR_CONDITIONER_PAGE_INDEX);
}

/*****************************************************************************************************************************/
/************************************************    calculator Methods    *****************************************************/
/*****************************************************************************************************************************/

void MainWindow::on_calcButton_clicked()
{
    ui->pagesSwitch->setCurrentIndex(CALCULATOR_PAGE_INDEX);
}
void MainWindow::onDigitClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    QString digitValue = clickedButton->text();
    QString currentValue = ui->display->text();

    if (waitingForSecondOperand) {
        currentValue = digitValue;
        waitingForSecondOperand = false;
    } else {
        if (currentValue == "0") {
            currentValue = digitValue;
        } else {
            currentValue += digitValue;
        }
    }

    ui->display->setText(currentValue);
}

void MainWindow::onOperatorClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    QString clickedOperator = clickedButton->text();
    firstOperand = ui->display->text().toDouble();
    pendingOperator = clickedOperator;
    waitingForSecondOperand = true;
}

void MainWindow::onEqualsClicked()
{
    double result = 0.0;
    secondOperand = ui->display->text().toDouble();

    if (pendingOperator == "+") {
        result = firstOperand + secondOperand;
    } else if (pendingOperator == "-") {
        result = firstOperand - secondOperand;
    } else if (pendingOperator == "*") {
        result = firstOperand * secondOperand;
    } else if (pendingOperator == "/") {
        result = firstOperand / secondOperand;
    }

    ui->display->setText(QString::number(result));
    waitingForSecondOperand = false;
}

void MainWindow::onClearClicked()
{
    ui->display->clear();
    ui->display->setText("0");
    firstOperand = 0;
    secondOperand = 0;
    pendingOperator.clear();
    waitingForSecondOperand = false;
}
/*****************************************************************************************************************************/
/************************************************    calendar Methods    *****************************************************/
/*****************************************************************************************************************************/

void MainWindow::on_calendarWidget_selectionChanged()
{
    // Handle calendar selection change
    QDate selectedDate = ui->calendarWidget->selectedDate();
}

void MainWindow::on_calendarButton_clicked()
{
    ui->pagesSwitch->setCurrentIndex(CALENDAR_SHOW_PAGE);
}

