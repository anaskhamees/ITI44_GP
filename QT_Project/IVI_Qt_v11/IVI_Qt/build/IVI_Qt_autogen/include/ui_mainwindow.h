/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *infoGroup;
    QLabel *dateText;
    QLabel *TempIconLabel;
    QLabel *TempValueLabel;
    QLabel *timeText;
    QGroupBox *currentRunningMediaGroup;
    QLabel *runningMediaLabel;
    QLabel *currentRunningMediaLabel;
    QLabel *bluetoothIconLabel;
    QStackedWidget *pagesSwitch;
    QWidget *homePage;
    QGroupBox *iconsGroup;
    QGroupBox *secondlinegroup;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *settingsButton;
    QPushButton *acButton;
    QPushButton *calendarButton;
    QPushButton *youtubeButton;
    QGroupBox *firstlinegroup;
    QHBoxLayout *horizontalLayout;
    QPushButton *bluetoothButton;
    QPushButton *musicButton;
    QPushButton *videoButton;
    QPushButton *calcButton;
    QWidget *videoPage;
    QPushButton *homeButtonVd;
    QGroupBox *noFlashGroupVideo;
    QLabel *noFlashLabelVideo;
    QLabel *usbImageLabelVideo;
    QGroupBox *runningVideoGroup;
    QLabel *runningVideoLabel;
    QGroupBox *zeroVideosGroup;
    QLabel *zeroVideosLabel;
    QLabel *mp4ImageLabel;
    QListWidget *runningVideosList;
    QWidget *musicPage;
    QPushButton *homeButtonMs;
    QGroupBox *runningMusicGroup;
    QListWidget *runningSongsList;
    QLabel *runningMusicLabel;
    QGroupBox *runningMusicControlGroup;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *repeatButton;
    QPushButton *backwardButton;
    QPushButton *stopButton;
    QPushButton *playButton;
    QPushButton *forwardButton;
    QPushButton *shuffleButton;
    QPushButton *volumeDownButton;
    QPushButton *volumeUpButton;
    QGroupBox *zeroSongsGroup;
    QLabel *zeroSongsLabel;
    QLabel *mp3ImageLabel;
    QGroupBox *noFlashGroupMusic;
    QLabel *noFlashLabelMusic;
    QLabel *usbImageLabelMusic;
    QWidget *bluetoothPage;
    QPushButton *homeButtonBl;
    QLabel *blueLabel;
    QLabel *connectedBluetoothDeviceLabel;
    QWidget *airconditionerPage;
    QLabel *valueLabel;
    QGroupBox *ACButtonsGroup;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button5;
    QGroupBox *ACledsGroup;
    QHBoxLayout *horizontalLayout_5;
    QLabel *led1;
    QLabel *led2;
    QLabel *led3;
    QLabel *led4;
    QLabel *led5;
    QPushButton *homeButtonAC;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSlider *slider;
    QWidget *calendarPage;
    QCalendarWidget *calendarWidget;
    QPushButton *homeButtonCL;
    QWidget *calculatorPage;
    QGridLayout *gridLayout;
    QLineEdit *display;
    QPushButton *button_7;
    QPushButton *button_8;
    QPushButton *button_9;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_0;
    QPushButton *button_dot;
    QPushButton *button_clear;
    QPushButton *button_plus;
    QPushButton *button_minus;
    QPushButton *button_multiply;
    QPushButton *button_divide;
    QPushButton *button_equals;
    QPushButton *homeButtonCALC;
    QWidget *settingsPage;
    QPushButton *homeButtonSt;
    QGroupBox *settingsContentGroup;
    QLabel *settingsPanelLabel;
    QGroupBox *setTimeDateGroup;
    QPushButton *doneTimeDateButton;
    QPushButton *cancelTimeDateButton;
    QTimeEdit *updatedTimeValue;
    QDateEdit *updatedDateValue;
    QLabel *updateTimeDateLabel;
    QGroupBox *settingsMainGroup;
    QLabel *ThemeLabel;
    QComboBox *themeComboBox;
    QLabel *setTimeDateLabel;
    QPushButton *setTimeDateButton;
    QWidget *videoShowPage;
    QGraphicsView *videoView;
    QGroupBox *runningVideoControlGroup;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *goTovideosListButton;
    QPushButton *backwardVideoButton;
    QPushButton *stopVideoButton;
    QPushButton *playVideoButton;
    QPushButton *forwardVideoButton;
    QPushButton *volumeDownVideoButton;
    QPushButton *volumeUpVideoButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(760, 380);
        MainWindow->setMaximumSize(QSize(800, 480));
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/mainBG/media/darkBackground.png);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        infoGroup = new QGroupBox(centralWidget);
        infoGroup->setObjectName(QString::fromUtf8("infoGroup"));
        infoGroup->setGeometry(QRect(0, 0, 760, 30));
        infoGroup->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        dateText = new QLabel(infoGroup);
        dateText->setObjectName(QString::fromUtf8("dateText"));
        dateText->setGeometry(QRect(520, 7, 151, 20));
        dateText->setMaximumSize(QSize(151, 20));
        QFont font;
        font.setBold(true);
        dateText->setFont(font);
        dateText->setStyleSheet(QString::fromUtf8("color:white;"));
        TempIconLabel = new QLabel(infoGroup);
        TempIconLabel->setObjectName(QString::fromUtf8("TempIconLabel"));
        TempIconLabel->setGeometry(QRect(300, 1, 60, 35));
        TempIconLabel->setFont(font);
        TempIconLabel->setStyleSheet(QString::fromUtf8("image: url(:/mainIcons/media/temp.png);\n"
""));
        TempIconLabel->setTextFormat(Qt::MarkdownText);
        TempValueLabel = new QLabel(infoGroup);
        TempValueLabel->setObjectName(QString::fromUtf8("TempValueLabel"));
        TempValueLabel->setGeometry(QRect(360, 5, 91, 25));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        TempValueLabel->setFont(font1);
        TempValueLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        TempValueLabel->setTextFormat(Qt::PlainText);
        timeText = new QLabel(infoGroup);
        timeText->setObjectName(QString::fromUtf8("timeText"));
        timeText->setGeometry(QRect(673, 7, 80, 20));
        timeText->setMaximumSize(QSize(81, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Ubuntu"));
        font2.setBold(true);
        timeText->setFont(font2);
        timeText->setStyleSheet(QString::fromUtf8("color:white;"));
        currentRunningMediaGroup = new QGroupBox(infoGroup);
        currentRunningMediaGroup->setObjectName(QString::fromUtf8("currentRunningMediaGroup"));
        currentRunningMediaGroup->setGeometry(QRect(19, 0, 221, 30));
        currentRunningMediaGroup->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        runningMediaLabel = new QLabel(currentRunningMediaGroup);
        runningMediaLabel->setObjectName(QString::fromUtf8("runningMediaLabel"));
        runningMediaLabel->setGeometry(QRect(0, 7, 31, 20));
        runningMediaLabel->setFont(font);
        runningMediaLabel->setStyleSheet(QString::fromUtf8("image: url(:/mainIcons/media/music_icon.png);"));
        currentRunningMediaLabel = new QLabel(currentRunningMediaGroup);
        currentRunningMediaLabel->setObjectName(QString::fromUtf8("currentRunningMediaLabel"));
        currentRunningMediaLabel->setGeometry(QRect(31, 7, 180, 20));
        currentRunningMediaLabel->setStyleSheet(QString::fromUtf8("color:white;\n"
""));
        currentRunningMediaLabel->setFrameShape(QFrame::NoFrame);
        bluetoothIconLabel = new QLabel(infoGroup);
        bluetoothIconLabel->setObjectName(QString::fromUtf8("bluetoothIconLabel"));
        bluetoothIconLabel->setGeometry(QRect(450, 5, 31, 20));
        bluetoothIconLabel->setFont(font);
        bluetoothIconLabel->setStyleSheet(QString::fromUtf8("image: url(:/mainIcons/media/bluetooth_icon.png);"));
        pagesSwitch = new QStackedWidget(centralWidget);
        pagesSwitch->setObjectName(QString::fromUtf8("pagesSwitch"));
        pagesSwitch->setGeometry(QRect(0, 32, 760, 350));
        homePage = new QWidget();
        homePage->setObjectName(QString::fromUtf8("homePage"));
        iconsGroup = new QGroupBox(homePage);
        iconsGroup->setObjectName(QString::fromUtf8("iconsGroup"));
        iconsGroup->setGeometry(QRect(0, 35, 760, 320));
        iconsGroup->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        secondlinegroup = new QGroupBox(iconsGroup);
        secondlinegroup->setObjectName(QString::fromUtf8("secondlinegroup"));
        secondlinegroup->setGeometry(QRect(20, 160, 721, 121));
        horizontalLayout_6 = new QHBoxLayout(secondlinegroup);
        horizontalLayout_6->setSpacing(40);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        settingsButton = new QPushButton(secondlinegroup);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        settingsButton->setBaseSize(QSize(90, 90));
        settingsButton->setFocusPolicy(Qt::NoFocus);
        settingsButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        settingsButton->setIconSize(QSize(100, 100));
        settingsButton->setAutoDefault(true);

        horizontalLayout_6->addWidget(settingsButton);

        acButton = new QPushButton(secondlinegroup);
        acButton->setObjectName(QString::fromUtf8("acButton"));

        horizontalLayout_6->addWidget(acButton);

        calendarButton = new QPushButton(secondlinegroup);
        calendarButton->setObjectName(QString::fromUtf8("calendarButton"));

        horizontalLayout_6->addWidget(calendarButton);

        youtubeButton = new QPushButton(secondlinegroup);
        youtubeButton->setObjectName(QString::fromUtf8("youtubeButton"));
        youtubeButton->setEnabled(true);
        youtubeButton->setBaseSize(QSize(90, 90));
        youtubeButton->setFocusPolicy(Qt::NoFocus);
        youtubeButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        youtubeButton->setIconSize(QSize(100, 200));
        youtubeButton->setAutoDefault(true);

        horizontalLayout_6->addWidget(youtubeButton);

        firstlinegroup = new QGroupBox(iconsGroup);
        firstlinegroup->setObjectName(QString::fromUtf8("firstlinegroup"));
        firstlinegroup->setGeometry(QRect(-30, 0, 761, 131));
        horizontalLayout = new QHBoxLayout(firstlinegroup);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bluetoothButton = new QPushButton(firstlinegroup);
        bluetoothButton->setObjectName(QString::fromUtf8("bluetoothButton"));
        bluetoothButton->setBaseSize(QSize(90, 90));
        bluetoothButton->setFocusPolicy(Qt::NoFocus);
        bluetoothButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        bluetoothButton->setIconSize(QSize(100, 100));
        bluetoothButton->setAutoDefault(true);

        horizontalLayout->addWidget(bluetoothButton);

        musicButton = new QPushButton(firstlinegroup);
        musicButton->setObjectName(QString::fromUtf8("musicButton"));
        musicButton->setBaseSize(QSize(90, 90));
        musicButton->setFocusPolicy(Qt::NoFocus);
        musicButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        musicButton->setIconSize(QSize(100, 100));
        musicButton->setAutoDefault(true);

        horizontalLayout->addWidget(musicButton);

        videoButton = new QPushButton(firstlinegroup);
        videoButton->setObjectName(QString::fromUtf8("videoButton"));
        videoButton->setBaseSize(QSize(90, 90));
        videoButton->setFocusPolicy(Qt::NoFocus);
        videoButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        videoButton->setIconSize(QSize(100, 100));
        videoButton->setAutoDefault(true);

        horizontalLayout->addWidget(videoButton);

        calcButton = new QPushButton(firstlinegroup);
        calcButton->setObjectName(QString::fromUtf8("calcButton"));

        horizontalLayout->addWidget(calcButton);

        pagesSwitch->addWidget(homePage);
        videoPage = new QWidget();
        videoPage->setObjectName(QString::fromUtf8("videoPage"));
        videoPage->setStyleSheet(QString::fromUtf8("background:none;\n"
""));
        homeButtonVd = new QPushButton(videoPage);
        homeButtonVd->setObjectName(QString::fromUtf8("homeButtonVd"));
        homeButtonVd->setGeometry(QRect(360, 290, 50, 50));
        homeButtonVd->setBaseSize(QSize(50, 50));
        homeButtonVd->setFocusPolicy(Qt::NoFocus);
        homeButtonVd->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:80px;"));
        homeButtonVd->setIconSize(QSize(100, 100));
        homeButtonVd->setAutoDefault(true);
        noFlashGroupVideo = new QGroupBox(videoPage);
        noFlashGroupVideo->setObjectName(QString::fromUtf8("noFlashGroupVideo"));
        noFlashGroupVideo->setEnabled(true);
        noFlashGroupVideo->setGeometry(QRect(0, 0, 760, 290));
        noFlashGroupVideo->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        noFlashLabelVideo = new QLabel(noFlashGroupVideo);
        noFlashLabelVideo->setObjectName(QString::fromUtf8("noFlashLabelVideo"));
        noFlashLabelVideo->setGeometry(QRect(70, 150, 550, 100));
        QFont font3;
        font3.setPointSize(35);
        noFlashLabelVideo->setFont(font3);
        noFlashLabelVideo->setStyleSheet(QString::fromUtf8("color:white;"));
        noFlashLabelVideo->setTextFormat(Qt::AutoText);
        noFlashLabelVideo->setAlignment(Qt::AlignCenter);
        usbImageLabelVideo = new QLabel(noFlashGroupVideo);
        usbImageLabelVideo->setObjectName(QString::fromUtf8("usbImageLabelVideo"));
        usbImageLabelVideo->setGeometry(QRect(620, 150, 100, 100));
        usbImageLabelVideo->setStyleSheet(QString::fromUtf8("image: url(:/checkFlash/media/usb_icon.png);"));
        runningVideoGroup = new QGroupBox(videoPage);
        runningVideoGroup->setObjectName(QString::fromUtf8("runningVideoGroup"));
        runningVideoGroup->setGeometry(QRect(0, 0, 760, 290));
        runningVideoGroup->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        runningVideoLabel = new QLabel(runningVideoGroup);
        runningVideoLabel->setObjectName(QString::fromUtf8("runningVideoLabel"));
        runningVideoLabel->setGeometry(QRect(5, 0, 195, 40));
        QFont font4;
        font4.setPointSize(25);
        font4.setBold(true);
        font4.setUnderline(true);
        runningVideoLabel->setFont(font4);
        runningVideoLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        runningVideoLabel->setFrameShape(QFrame::NoFrame);
        zeroVideosGroup = new QGroupBox(runningVideoGroup);
        zeroVideosGroup->setObjectName(QString::fromUtf8("zeroVideosGroup"));
        zeroVideosGroup->setGeometry(QRect(0, 0, 800, 400));
        zeroVideosLabel = new QLabel(zeroVideosGroup);
        zeroVideosLabel->setObjectName(QString::fromUtf8("zeroVideosLabel"));
        zeroVideosLabel->setGeometry(QRect(100, 150, 450, 100));
        zeroVideosLabel->setFont(font3);
        zeroVideosLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        mp4ImageLabel = new QLabel(zeroVideosGroup);
        mp4ImageLabel->setObjectName(QString::fromUtf8("mp4ImageLabel"));
        mp4ImageLabel->setGeometry(QRect(560, 150, 80, 100));
        mp4ImageLabel->setStyleSheet(QString::fromUtf8("image: url(:/videoIcons/media/mp4_icon.png);"));
        runningVideosList = new QListWidget(runningVideoGroup);
        runningVideosList->setObjectName(QString::fromUtf8("runningVideosList"));
        runningVideosList->setGeometry(QRect(0, 55, 760, 200));
        QFont font5;
        font5.setPointSize(20);
        runningVideosList->setFont(font5);
        runningVideosList->setFocusPolicy(Qt::NoFocus);
        runningVideosList->setAutoFillBackground(true);
        runningVideosList->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color:white;"));
        runningVideosList->setFrameShape(QFrame::StyledPanel);
        runningVideosList->setLineWidth(1);
        runningVideosList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        runningVideosList->setAutoScrollMargin(16);
        runningVideosList->setSelectionBehavior(QAbstractItemView::SelectItems);
        pagesSwitch->addWidget(videoPage);
        musicPage = new QWidget();
        musicPage->setObjectName(QString::fromUtf8("musicPage"));
        musicPage->setStyleSheet(QString::fromUtf8("background:none;\n"
""));
        homeButtonMs = new QPushButton(musicPage);
        homeButtonMs->setObjectName(QString::fromUtf8("homeButtonMs"));
        homeButtonMs->setGeometry(QRect(360, 300, 50, 50));
        homeButtonMs->setBaseSize(QSize(50, 50));
        homeButtonMs->setFocusPolicy(Qt::NoFocus);
        homeButtonMs->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:80px;"));
        homeButtonMs->setIconSize(QSize(100, 100));
        homeButtonMs->setAutoDefault(true);
        runningMusicGroup = new QGroupBox(musicPage);
        runningMusicGroup->setObjectName(QString::fromUtf8("runningMusicGroup"));
        runningMusicGroup->setGeometry(QRect(0, 0, 760, 290));
        runningMusicGroup->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        runningSongsList = new QListWidget(runningMusicGroup);
        runningSongsList->setObjectName(QString::fromUtf8("runningSongsList"));
        runningSongsList->setGeometry(QRect(0, 50, 760, 160));
        runningSongsList->setFont(font5);
        runningSongsList->setFocusPolicy(Qt::NoFocus);
        runningSongsList->setAutoFillBackground(true);
        runningSongsList->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color:white;"));
        runningSongsList->setFrameShape(QFrame::StyledPanel);
        runningSongsList->setLineWidth(1);
        runningSongsList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        runningSongsList->setAutoScrollMargin(16);
        runningSongsList->setSelectionBehavior(QAbstractItemView::SelectItems);
        runningMusicLabel = new QLabel(runningMusicGroup);
        runningMusicLabel->setObjectName(QString::fromUtf8("runningMusicLabel"));
        runningMusicLabel->setGeometry(QRect(5, 0, 191, 40));
        QFont font6;
        font6.setPointSize(25);
        font6.setBold(true);
        font6.setUnderline(true);
        font6.setKerning(true);
        runningMusicLabel->setFont(font6);
        runningMusicLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        runningMusicLabel->setFrameShape(QFrame::NoFrame);
        runningMusicControlGroup = new QGroupBox(runningMusicGroup);
        runningMusicControlGroup->setObjectName(QString::fromUtf8("runningMusicControlGroup"));
        runningMusicControlGroup->setGeometry(QRect(0, 210, 761, 80));
        horizontalLayout_2 = new QHBoxLayout(runningMusicControlGroup);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        repeatButton = new QPushButton(runningMusicControlGroup);
        repeatButton->setObjectName(QString::fromUtf8("repeatButton"));
        repeatButton->setBaseSize(QSize(40, 40));
        repeatButton->setFocusPolicy(Qt::NoFocus);
        repeatButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        repeatButton->setIconSize(QSize(40, 40));
        repeatButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(repeatButton);

        backwardButton = new QPushButton(runningMusicControlGroup);
        backwardButton->setObjectName(QString::fromUtf8("backwardButton"));
        backwardButton->setBaseSize(QSize(40, 40));
        backwardButton->setFocusPolicy(Qt::NoFocus);
        backwardButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        backwardButton->setIconSize(QSize(40, 40));
        backwardButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(backwardButton);

        stopButton = new QPushButton(runningMusicControlGroup);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setBaseSize(QSize(40, 40));
        stopButton->setFocusPolicy(Qt::NoFocus);
        stopButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        stopButton->setIconSize(QSize(40, 40));
        stopButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(stopButton);

        playButton = new QPushButton(runningMusicControlGroup);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setBaseSize(QSize(40, 40));
        playButton->setFocusPolicy(Qt::NoFocus);
        playButton->setStyleSheet(QString::fromUtf8("border-radius:50px;\n"
"border:none;"));
        playButton->setIconSize(QSize(40, 40));
        playButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(playButton);

        forwardButton = new QPushButton(runningMusicControlGroup);
        forwardButton->setObjectName(QString::fromUtf8("forwardButton"));
        forwardButton->setBaseSize(QSize(40, 40));
        forwardButton->setFocusPolicy(Qt::NoFocus);
        forwardButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        forwardButton->setIconSize(QSize(40, 40));
        forwardButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(forwardButton);

        shuffleButton = new QPushButton(runningMusicControlGroup);
        shuffleButton->setObjectName(QString::fromUtf8("shuffleButton"));
        shuffleButton->setBaseSize(QSize(40, 40));
        shuffleButton->setFocusPolicy(Qt::NoFocus);
        shuffleButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        shuffleButton->setIconSize(QSize(40, 40));
        shuffleButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(shuffleButton);

        volumeDownButton = new QPushButton(runningMusicControlGroup);
        volumeDownButton->setObjectName(QString::fromUtf8("volumeDownButton"));
        volumeDownButton->setBaseSize(QSize(30, 30));
        volumeDownButton->setFocusPolicy(Qt::NoFocus);
        volumeDownButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        volumeDownButton->setIconSize(QSize(30, 30));
        volumeDownButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(volumeDownButton);

        volumeUpButton = new QPushButton(runningMusicControlGroup);
        volumeUpButton->setObjectName(QString::fromUtf8("volumeUpButton"));
        volumeUpButton->setBaseSize(QSize(30, 30));
        volumeUpButton->setFocusPolicy(Qt::NoFocus);
        volumeUpButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        volumeUpButton->setIconSize(QSize(30, 30));
        volumeUpButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(volumeUpButton);

        zeroSongsGroup = new QGroupBox(runningMusicGroup);
        zeroSongsGroup->setObjectName(QString::fromUtf8("zeroSongsGroup"));
        zeroSongsGroup->setGeometry(QRect(0, 0, 760, 350));
        zeroSongsLabel = new QLabel(zeroSongsGroup);
        zeroSongsLabel->setObjectName(QString::fromUtf8("zeroSongsLabel"));
        zeroSongsLabel->setGeometry(QRect(100, 100, 450, 100));
        zeroSongsLabel->setFont(font3);
        zeroSongsLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        mp3ImageLabel = new QLabel(zeroSongsGroup);
        mp3ImageLabel->setObjectName(QString::fromUtf8("mp3ImageLabel"));
        mp3ImageLabel->setGeometry(QRect(560, 100, 80, 100));
        mp3ImageLabel->setStyleSheet(QString::fromUtf8("image: url(:/checkFlash/media/mp3_icon.png);"));
        noFlashGroupMusic = new QGroupBox(musicPage);
        noFlashGroupMusic->setObjectName(QString::fromUtf8("noFlashGroupMusic"));
        noFlashGroupMusic->setEnabled(true);
        noFlashGroupMusic->setGeometry(QRect(0, 0, 760, 280));
        noFlashGroupMusic->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        noFlashLabelMusic = new QLabel(noFlashGroupMusic);
        noFlashLabelMusic->setObjectName(QString::fromUtf8("noFlashLabelMusic"));
        noFlashLabelMusic->setGeometry(QRect(70, 150, 550, 100));
        noFlashLabelMusic->setFont(font3);
        noFlashLabelMusic->setStyleSheet(QString::fromUtf8("color:white;"));
        noFlashLabelMusic->setTextFormat(Qt::AutoText);
        noFlashLabelMusic->setAlignment(Qt::AlignCenter);
        usbImageLabelMusic = new QLabel(noFlashGroupMusic);
        usbImageLabelMusic->setObjectName(QString::fromUtf8("usbImageLabelMusic"));
        usbImageLabelMusic->setGeometry(QRect(620, 150, 100, 100));
        usbImageLabelMusic->setStyleSheet(QString::fromUtf8("image: url(:/checkFlash/media/usb_icon.png);"));
        pagesSwitch->addWidget(musicPage);
        bluetoothPage = new QWidget();
        bluetoothPage->setObjectName(QString::fromUtf8("bluetoothPage"));
        bluetoothPage->setStyleSheet(QString::fromUtf8("background:none;\n"
""));
        homeButtonBl = new QPushButton(bluetoothPage);
        homeButtonBl->setObjectName(QString::fromUtf8("homeButtonBl"));
        homeButtonBl->setGeometry(QRect(360, 290, 50, 50));
        homeButtonBl->setBaseSize(QSize(50, 50));
        homeButtonBl->setFocusPolicy(Qt::NoFocus);
        homeButtonBl->setToolTipDuration(-3);
        homeButtonBl->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:80px;"));
        homeButtonBl->setIconSize(QSize(100, 100));
        homeButtonBl->setAutoDefault(true);
        blueLabel = new QLabel(bluetoothPage);
        blueLabel->setObjectName(QString::fromUtf8("blueLabel"));
        blueLabel->setGeometry(QRect(260, 0, 260, 200));
        QFont font7;
        font7.setPointSize(62);
        font7.setBold(true);
        blueLabel->setFont(font7);
        blueLabel->setStyleSheet(QString::fromUtf8("color:white;\n"
"image: url(:/bluetoothControl/media/bluetoothMain.png);"));
        blueLabel->setAlignment(Qt::AlignCenter);
        connectedBluetoothDeviceLabel = new QLabel(bluetoothPage);
        connectedBluetoothDeviceLabel->setObjectName(QString::fromUtf8("connectedBluetoothDeviceLabel"));
        connectedBluetoothDeviceLabel->setGeometry(QRect(209, 200, 471, 50));
        QFont font8;
        font8.setPointSize(15);
        connectedBluetoothDeviceLabel->setFont(font8);
        connectedBluetoothDeviceLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        connectedBluetoothDeviceLabel->setAlignment(Qt::AlignCenter);
        pagesSwitch->addWidget(bluetoothPage);
        airconditionerPage = new QWidget();
        airconditionerPage->setObjectName(QString::fromUtf8("airconditionerPage"));
        airconditionerPage->setStyleSheet(QString::fromUtf8("background:none;\n"
""));
        valueLabel = new QLabel(airconditionerPage);
        valueLabel->setObjectName(QString::fromUtf8("valueLabel"));
        valueLabel->setGeometry(QRect(600, 230, 101, 41));
        QFont font9;
        font9.setPointSize(22);
        valueLabel->setFont(font9);
        valueLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        ACButtonsGroup = new QGroupBox(airconditionerPage);
        ACButtonsGroup->setObjectName(QString::fromUtf8("ACButtonsGroup"));
        ACButtonsGroup->setGeometry(QRect(0, 20, 751, 91));
        ACButtonsGroup->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:80px;\n"
"background:none;"));
        horizontalLayout_4 = new QHBoxLayout(ACButtonsGroup);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        button1 = new QPushButton(ACButtonsGroup);
        button1->setObjectName(QString::fromUtf8("button1"));

        horizontalLayout_4->addWidget(button1);

        button2 = new QPushButton(ACButtonsGroup);
        button2->setObjectName(QString::fromUtf8("button2"));

        horizontalLayout_4->addWidget(button2);

        button3 = new QPushButton(ACButtonsGroup);
        button3->setObjectName(QString::fromUtf8("button3"));

        horizontalLayout_4->addWidget(button3);

        button4 = new QPushButton(ACButtonsGroup);
        button4->setObjectName(QString::fromUtf8("button4"));

        horizontalLayout_4->addWidget(button4);

        button5 = new QPushButton(ACButtonsGroup);
        button5->setObjectName(QString::fromUtf8("button5"));

        horizontalLayout_4->addWidget(button5);

        ACledsGroup = new QGroupBox(airconditionerPage);
        ACledsGroup->setObjectName(QString::fromUtf8("ACledsGroup"));
        ACledsGroup->setGeometry(QRect(20, 110, 711, 41));
        ACledsGroup->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:none;"));
        horizontalLayout_5 = new QHBoxLayout(ACledsGroup);
        horizontalLayout_5->setSpacing(100);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        led1 = new QLabel(ACledsGroup);
        led1->setObjectName(QString::fromUtf8("led1"));

        horizontalLayout_5->addWidget(led1);

        led2 = new QLabel(ACledsGroup);
        led2->setObjectName(QString::fromUtf8("led2"));

        horizontalLayout_5->addWidget(led2);

        led3 = new QLabel(ACledsGroup);
        led3->setObjectName(QString::fromUtf8("led3"));

        horizontalLayout_5->addWidget(led3);

        led4 = new QLabel(ACledsGroup);
        led4->setObjectName(QString::fromUtf8("led4"));

        horizontalLayout_5->addWidget(led4);

        led5 = new QLabel(ACledsGroup);
        led5->setObjectName(QString::fromUtf8("led5"));

        horizontalLayout_5->addWidget(led5);

        homeButtonAC = new QPushButton(airconditionerPage);
        homeButtonAC->setObjectName(QString::fromUtf8("homeButtonAC"));
        homeButtonAC->setGeometry(QRect(360, 290, 50, 50));
        homeButtonAC->setBaseSize(QSize(50, 50));
        homeButtonAC->setFocusPolicy(Qt::NoFocus);
        homeButtonAC->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:80px;"));
        homeButtonAC->setIconSize(QSize(100, 100));
        homeButtonAC->setAutoDefault(true);
        layoutWidget = new QWidget(airconditionerPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 160, 401, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/ACIcons/media/slider-removebg-preview(1).png);"));

        verticalLayout->addWidget(label);

        slider = new QSlider(layoutWidget);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #999999;\n"
"    height: 8px;\n"
"    background: #B0B0B0;\n"
"    margin: 2px 0;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: green;\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    margin: -6px 0; /* centering the handle */\n"
"    border-radius: 0; /* remove rounding */\n"
"    clip-path: polygon(50% 0%, 100% 100%, 0% 100%); /* arrow shape */\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border: 1px solid #999999;\n"
"    width: 8px;\n"
"    background: #B0B0B0;\n"
"    margin: 0 2px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: green;\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    margin: 0 -6px; /* centering the handle */\n"
"    border-radius: 0; /* remove rounding */\n"
"    clip-path: polygon(0% 0%, 100% 50%, 0% 100%); /* arrow shape */\n"
"}\n"
""));
        slider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(slider);

        pagesSwitch->addWidget(airconditionerPage);
        calendarPage = new QWidget();
        calendarPage->setObjectName(QString::fromUtf8("calendarPage"));
        calendarPage->setStyleSheet(QString::fromUtf8("background:none;\n"
""));
        calendarWidget = new QCalendarWidget(calendarPage);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(9, 9, 741, 261));
        homeButtonCL = new QPushButton(calendarPage);
        homeButtonCL->setObjectName(QString::fromUtf8("homeButtonCL"));
        homeButtonCL->setGeometry(QRect(360, 290, 50, 50));
        homeButtonCL->setBaseSize(QSize(50, 50));
        homeButtonCL->setFocusPolicy(Qt::NoFocus);
        homeButtonCL->setStyleSheet(QString::fromUtf8("border:none;"));
        pagesSwitch->addWidget(calendarPage);
        calculatorPage = new QWidget();
        calculatorPage->setObjectName(QString::fromUtf8("calculatorPage"));
        calculatorPage->setFont(font1);
        calculatorPage->setAutoFillBackground(false);
        calculatorPage->setStyleSheet(QString::fromUtf8("background: gray;"));
        gridLayout = new QGridLayout(calculatorPage);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        display = new QLineEdit(calculatorPage);
        display->setObjectName(QString::fromUtf8("display"));
        display->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.323383 rgba(154, 153, 150, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 700 19pt \"Ubuntu\";"));

        gridLayout->addWidget(display, 0, 0, 1, 4);

        button_7 = new QPushButton(calculatorPage);
        button_7->setObjectName(QString::fromUtf8("button_7"));
        button_7->setStyleSheet(QString::fromUtf8("background: light gray;\n"
"font: 700 15pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(button_7, 1, 0, 1, 1);

        button_8 = new QPushButton(calculatorPage);
        button_8->setObjectName(QString::fromUtf8("button_8"));
        button_8->setStyleSheet(QString::fromUtf8("background: light gray;\n"
"font: 700 15pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(button_8, 1, 1, 1, 1);

        button_9 = new QPushButton(calculatorPage);
        button_9->setObjectName(QString::fromUtf8("button_9"));
        button_9->setStyleSheet(QString::fromUtf8("background: light gray;\n"
"font: 700 15pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(button_9, 1, 2, 1, 1);

        button_4 = new QPushButton(calculatorPage);
        button_4->setObjectName(QString::fromUtf8("button_4"));
        button_4->setStyleSheet(QString::fromUtf8("background: light gray;\n"
"font: 700 15pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(button_4, 2, 0, 1, 1);

        button_5 = new QPushButton(calculatorPage);
        button_5->setObjectName(QString::fromUtf8("button_5"));
        button_5->setStyleSheet(QString::fromUtf8("background: light gray;\n"
"font: 700 15pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(button_5, 2, 1, 1, 1);

        button_6 = new QPushButton(calculatorPage);
        button_6->setObjectName(QString::fromUtf8("button_6"));
        button_6->setStyleSheet(QString::fromUtf8("background: light gray;\n"
"font: 700 15pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(button_6, 2, 2, 1, 1);

        button_1 = new QPushButton(calculatorPage);
        button_1->setObjectName(QString::fromUtf8("button_1"));
        button_1->setStyleSheet(QString::fromUtf8("background: light gray;\n"
"font: 700 15pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(button_1, 3, 0, 1, 1);

        button_2 = new QPushButton(calculatorPage);
        button_2->setObjectName(QString::fromUtf8("button_2"));
        button_2->setStyleSheet(QString::fromUtf8("background: light gray;\n"
"font: 700 15pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(button_2, 3, 1, 1, 1);

        button_3 = new QPushButton(calculatorPage);
        button_3->setObjectName(QString::fromUtf8("button_3"));
        button_3->setStyleSheet(QString::fromUtf8("background: light gray;\n"
"font: 700 15pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(button_3, 3, 2, 1, 1);

        button_0 = new QPushButton(calculatorPage);
        button_0->setObjectName(QString::fromUtf8("button_0"));
        button_0->setStyleSheet(QString::fromUtf8("background: light gray;\n"
"font: 700 15pt \"Ubuntu\";\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(button_0, 4, 0, 1, 2);

        button_dot = new QPushButton(calculatorPage);
        button_dot->setObjectName(QString::fromUtf8("button_dot"));
        button_dot->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 15pt \"Ubuntu\";\n"
"background: black;"));

        gridLayout->addWidget(button_dot, 4, 2, 1, 1);

        button_clear = new QPushButton(calculatorPage);
        button_clear->setObjectName(QString::fromUtf8("button_clear"));
        button_clear->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 15pt \"Ubuntu\";\n"
"background: black;"));

        gridLayout->addWidget(button_clear, 4, 3, 1, 1);

        button_plus = new QPushButton(calculatorPage);
        button_plus->setObjectName(QString::fromUtf8("button_plus"));
        button_plus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 15pt \"Ubuntu\";\n"
"background: black;"));

        gridLayout->addWidget(button_plus, 1, 3, 1, 1);

        button_minus = new QPushButton(calculatorPage);
        button_minus->setObjectName(QString::fromUtf8("button_minus"));
        button_minus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 15pt \"Ubuntu\";\n"
"background: black;"));

        gridLayout->addWidget(button_minus, 2, 3, 1, 1);

        button_multiply = new QPushButton(calculatorPage);
        button_multiply->setObjectName(QString::fromUtf8("button_multiply"));
        button_multiply->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 15pt \"Ubuntu\";\n"
"background: black;"));

        gridLayout->addWidget(button_multiply, 3, 3, 1, 1);

        button_divide = new QPushButton(calculatorPage);
        button_divide->setObjectName(QString::fromUtf8("button_divide"));
        button_divide->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 15pt \"Ubuntu\";\n"
"background: black;"));

        gridLayout->addWidget(button_divide, 4, 3, 1, 1);

        button_equals = new QPushButton(calculatorPage);
        button_equals->setObjectName(QString::fromUtf8("button_equals"));
        button_equals->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 15pt \"Ubuntu\";\n"
"background: black;"));

        gridLayout->addWidget(button_equals, 5, 2, 1, 2);

        homeButtonCALC = new QPushButton(calculatorPage);
        homeButtonCALC->setObjectName(QString::fromUtf8("homeButtonCALC"));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Ubuntu"));
        font10.setPointSize(20);
        font10.setBold(true);
        font10.setItalic(false);
        homeButtonCALC->setFont(font10);
        homeButtonCALC->setFocusPolicy(Qt::NoFocus);
        homeButtonCALC->setAutoFillBackground(false);
        homeButtonCALC->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Ubuntu\";\n"
"background: red;"));

        gridLayout->addWidget(homeButtonCALC, 5, 0, 1, 1);

        pagesSwitch->addWidget(calculatorPage);
        settingsPage = new QWidget();
        settingsPage->setObjectName(QString::fromUtf8("settingsPage"));
        settingsPage->setStyleSheet(QString::fromUtf8("background:none;\n"
""));
        homeButtonSt = new QPushButton(settingsPage);
        homeButtonSt->setObjectName(QString::fromUtf8("homeButtonSt"));
        homeButtonSt->setGeometry(QRect(360, 290, 50, 50));
        homeButtonSt->setBaseSize(QSize(50, 50));
        homeButtonSt->setFocusPolicy(Qt::NoFocus);
        homeButtonSt->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:80px;"));
        homeButtonSt->setIconSize(QSize(100, 100));
        homeButtonSt->setAutoDefault(true);
        settingsContentGroup = new QGroupBox(settingsPage);
        settingsContentGroup->setObjectName(QString::fromUtf8("settingsContentGroup"));
        settingsContentGroup->setGeometry(QRect(10, 0, 760, 290));
        settingsContentGroup->setStyleSheet(QString::fromUtf8("background:none;\n"
"border:none;"));
        settingsPanelLabel = new QLabel(settingsContentGroup);
        settingsPanelLabel->setObjectName(QString::fromUtf8("settingsPanelLabel"));
        settingsPanelLabel->setGeometry(QRect(10, 0, 280, 50));
        settingsPanelLabel->setFont(font4);
        settingsPanelLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        settingsPanelLabel->setFrameShape(QFrame::NoFrame);
        setTimeDateGroup = new QGroupBox(settingsContentGroup);
        setTimeDateGroup->setObjectName(QString::fromUtf8("setTimeDateGroup"));
        setTimeDateGroup->setGeometry(QRect(60, 50, 700, 300));
        setTimeDateGroup->setFont(font5);
        setTimeDateGroup->setStyleSheet(QString::fromUtf8("color:white;"));
        doneTimeDateButton = new QPushButton(setTimeDateGroup);
        doneTimeDateButton->setObjectName(QString::fromUtf8("doneTimeDateButton"));
        doneTimeDateButton->setGeometry(QRect(360, 160, 60, 60));
        doneTimeDateButton->setBaseSize(QSize(50, 50));
        doneTimeDateButton->setFont(font8);
        doneTimeDateButton->setIconSize(QSize(50, 50));
        cancelTimeDateButton = new QPushButton(setTimeDateGroup);
        cancelTimeDateButton->setObjectName(QString::fromUtf8("cancelTimeDateButton"));
        cancelTimeDateButton->setGeometry(QRect(280, 160, 60, 60));
        cancelTimeDateButton->setBaseSize(QSize(50, 50));
        cancelTimeDateButton->setFont(font8);
        cancelTimeDateButton->setStyleSheet(QString::fromUtf8(""));
        cancelTimeDateButton->setIconSize(QSize(50, 50));
        updatedTimeValue = new QTimeEdit(setTimeDateGroup);
        updatedTimeValue->setObjectName(QString::fromUtf8("updatedTimeValue"));
        updatedTimeValue->setGeometry(QRect(130, 40, 200, 60));
        QFont font11;
        font11.setPointSize(30);
        updatedTimeValue->setFont(font11);
        updatedTimeValue->setStyleSheet(QString::fromUtf8("color:black;"));
        updatedTimeValue->setProperty("showGroupSeparator", QVariant(false));
        updatedTimeValue->setCurrentSection(QDateTimeEdit::HourSection);
        updatedDateValue = new QDateEdit(setTimeDateGroup);
        updatedDateValue->setObjectName(QString::fromUtf8("updatedDateValue"));
        updatedDateValue->setGeometry(QRect(350, 40, 250, 60));
        updatedDateValue->setFont(font11);
        updatedDateValue->setStyleSheet(QString::fromUtf8("color:black;"));
        updatedDateValue->setDateTime(QDateTime(QDate(2024, 6, 28), QTime(20, 43, 0)));
        updatedDateValue->setCalendarPopup(true);
        updatedDateValue->setDate(QDate(2024, 6, 28));
        updateTimeDateLabel = new QLabel(setTimeDateGroup);
        updateTimeDateLabel->setObjectName(QString::fromUtf8("updateTimeDateLabel"));
        updateTimeDateLabel->setGeometry(QRect(0, 40, 100, 100));
        QFont font12;
        font12.setPointSize(25);
        updateTimeDateLabel->setFont(font12);
        updateTimeDateLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        updateTimeDateLabel->setAlignment(Qt::AlignCenter);
        updateTimeDateLabel->setWordWrap(true);
        settingsMainGroup = new QGroupBox(settingsContentGroup);
        settingsMainGroup->setObjectName(QString::fromUtf8("settingsMainGroup"));
        settingsMainGroup->setGeometry(QRect(10, 0, 750, 350));
        ThemeLabel = new QLabel(settingsMainGroup);
        ThemeLabel->setObjectName(QString::fromUtf8("ThemeLabel"));
        ThemeLabel->setGeometry(QRect(10, 55, 200, 50));
        ThemeLabel->setFont(font5);
        ThemeLabel->setStyleSheet(QString::fromUtf8("color:white;\n"
"       "));
        themeComboBox = new QComboBox(settingsMainGroup);
        themeComboBox->addItem(QString());
        themeComboBox->addItem(QString());
        themeComboBox->addItem(QString());
        themeComboBox->addItem(QString());
        themeComboBox->setObjectName(QString::fromUtf8("themeComboBox"));
        themeComboBox->setGeometry(QRect(400, 80, 200, 25));
        QFont font13;
        font13.setFamily(QString::fromUtf8("Ubuntu"));
        font13.setPointSize(13);
        font13.setBold(true);
        font13.setItalic(false);
        themeComboBox->setFont(font13);
        themeComboBox->setAcceptDrops(false);
        themeComboBox->setAutoFillBackground(false);
        themeComboBox->setStyleSheet(QString::fromUtf8("font: 700 13pt \"Ubuntu\";\n"
""));
        themeComboBox->setEditable(false);
        themeComboBox->setFrame(false);
        setTimeDateLabel = new QLabel(settingsMainGroup);
        setTimeDateLabel->setObjectName(QString::fromUtf8("setTimeDateLabel"));
        setTimeDateLabel->setGeometry(QRect(10, 150, 200, 55));
        setTimeDateLabel->setFont(font5);
        setTimeDateLabel->setStyleSheet(QString::fromUtf8("color:white;\n"
""));
        setTimeDateButton = new QPushButton(settingsMainGroup);
        setTimeDateButton->setObjectName(QString::fromUtf8("setTimeDateButton"));
        setTimeDateButton->setGeometry(QRect(400, 150, 280, 50));
        setTimeDateButton->setFont(font8);
        setTimeDateButton->setStyleSheet(QString::fromUtf8("color:white;"));
        settingsPanelLabel->raise();
        settingsMainGroup->raise();
        setTimeDateGroup->raise();
        pagesSwitch->addWidget(settingsPage);
        videoShowPage = new QWidget();
        videoShowPage->setObjectName(QString::fromUtf8("videoShowPage"));
        videoShowPage->setStyleSheet(QString::fromUtf8("background:none;"));
        videoView = new QGraphicsView(videoShowPage);
        videoView->setObjectName(QString::fromUtf8("videoView"));
        videoView->setGeometry(QRect(30, 20, 700, 250));
        videoView->setStyleSheet(QString::fromUtf8("background: transparent;"));
        videoView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        videoView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        videoView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        videoView->setBackgroundBrush(brush);
        videoView->setSceneRect(QRectF(0, 0, 880, 380));
        runningVideoControlGroup = new QGroupBox(videoShowPage);
        runningVideoControlGroup->setObjectName(QString::fromUtf8("runningVideoControlGroup"));
        runningVideoControlGroup->setGeometry(QRect(0, 270, 760, 70));
        runningVideoControlGroup->setStyleSheet(QString::fromUtf8("border:none;"));
        horizontalLayout_3 = new QHBoxLayout(runningVideoControlGroup);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        goTovideosListButton = new QPushButton(runningVideoControlGroup);
        goTovideosListButton->setObjectName(QString::fromUtf8("goTovideosListButton"));

        horizontalLayout_3->addWidget(goTovideosListButton);

        backwardVideoButton = new QPushButton(runningVideoControlGroup);
        backwardVideoButton->setObjectName(QString::fromUtf8("backwardVideoButton"));
        backwardVideoButton->setBaseSize(QSize(40, 40));
        backwardVideoButton->setFocusPolicy(Qt::NoFocus);
        backwardVideoButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        backwardVideoButton->setIconSize(QSize(40, 40));
        backwardVideoButton->setAutoDefault(true);

        horizontalLayout_3->addWidget(backwardVideoButton);

        stopVideoButton = new QPushButton(runningVideoControlGroup);
        stopVideoButton->setObjectName(QString::fromUtf8("stopVideoButton"));
        stopVideoButton->setBaseSize(QSize(40, 40));
        stopVideoButton->setFocusPolicy(Qt::NoFocus);
        stopVideoButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        stopVideoButton->setIconSize(QSize(40, 40));
        stopVideoButton->setAutoDefault(true);

        horizontalLayout_3->addWidget(stopVideoButton);

        playVideoButton = new QPushButton(runningVideoControlGroup);
        playVideoButton->setObjectName(QString::fromUtf8("playVideoButton"));
        playVideoButton->setBaseSize(QSize(40, 40));
        playVideoButton->setFocusPolicy(Qt::NoFocus);
        playVideoButton->setStyleSheet(QString::fromUtf8("border-radius:50px;\n"
"border:none;"));
        playVideoButton->setIconSize(QSize(40, 40));
        playVideoButton->setAutoDefault(true);

        horizontalLayout_3->addWidget(playVideoButton);

        forwardVideoButton = new QPushButton(runningVideoControlGroup);
        forwardVideoButton->setObjectName(QString::fromUtf8("forwardVideoButton"));
        forwardVideoButton->setBaseSize(QSize(40, 40));
        forwardVideoButton->setFocusPolicy(Qt::NoFocus);
        forwardVideoButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        forwardVideoButton->setIconSize(QSize(40, 40));
        forwardVideoButton->setAutoDefault(true);

        horizontalLayout_3->addWidget(forwardVideoButton);

        volumeDownVideoButton = new QPushButton(runningVideoControlGroup);
        volumeDownVideoButton->setObjectName(QString::fromUtf8("volumeDownVideoButton"));
        volumeDownVideoButton->setBaseSize(QSize(30, 30));
        volumeDownVideoButton->setFocusPolicy(Qt::NoFocus);
        volumeDownVideoButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        volumeDownVideoButton->setIconSize(QSize(30, 30));
        volumeDownVideoButton->setAutoDefault(true);

        horizontalLayout_3->addWidget(volumeDownVideoButton);

        volumeUpVideoButton = new QPushButton(runningVideoControlGroup);
        volumeUpVideoButton->setObjectName(QString::fromUtf8("volumeUpVideoButton"));
        volumeUpVideoButton->setBaseSize(QSize(30, 30));
        volumeUpVideoButton->setFocusPolicy(Qt::NoFocus);
        volumeUpVideoButton->setStyleSheet(QString::fromUtf8("border:none;\n"
"border-radius:50px;"));
        volumeUpVideoButton->setIconSize(QSize(30, 30));
        volumeUpVideoButton->setAutoDefault(true);

        horizontalLayout_3->addWidget(volumeUpVideoButton);

        pagesSwitch->addWidget(videoShowPage);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        pagesSwitch->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Infotainment System", nullptr));
        infoGroup->setTitle(QString());
        dateText->setText(QString());
        TempIconLabel->setText(QString());
        TempValueLabel->setText(QString());
        timeText->setText(QString());
        currentRunningMediaGroup->setTitle(QString());
        runningMediaLabel->setText(QString());
        currentRunningMediaLabel->setText(QString());
        bluetoothIconLabel->setText(QString());
        iconsGroup->setTitle(QString());
        settingsButton->setText(QString());
        acButton->setText(QString());
        calendarButton->setText(QString());
        youtubeButton->setText(QString());
        bluetoothButton->setText(QString());
        musicButton->setText(QString());
        videoButton->setText(QString());
        calcButton->setText(QString());
        homeButtonVd->setText(QString());
        noFlashGroupVideo->setTitle(QString());
        noFlashLabelVideo->setText(QCoreApplication::translate("MainWindow", "No Flash USB Detected!", nullptr));
        usbImageLabelVideo->setText(QString());
        runningVideoGroup->setTitle(QString());
        runningVideoLabel->setText(QCoreApplication::translate("MainWindow", "Videos List", nullptr));
        zeroVideosGroup->setTitle(QString());
        zeroVideosLabel->setText(QCoreApplication::translate("MainWindow", "No MP4 Files To Run", nullptr));
        mp4ImageLabel->setText(QString());
        homeButtonMs->setText(QString());
        runningMusicGroup->setTitle(QString());
        runningMusicLabel->setText(QCoreApplication::translate("MainWindow", "Music List", nullptr));
        runningMusicControlGroup->setTitle(QString());
        repeatButton->setText(QString());
        backwardButton->setText(QString());
        stopButton->setText(QString());
        playButton->setText(QString());
        forwardButton->setText(QString());
        shuffleButton->setText(QString());
        volumeDownButton->setText(QString());
        volumeUpButton->setText(QString());
        zeroSongsGroup->setTitle(QString());
        zeroSongsLabel->setText(QCoreApplication::translate("MainWindow", "No MP3 Files To Run", nullptr));
        mp3ImageLabel->setText(QString());
        noFlashGroupMusic->setTitle(QString());
        noFlashLabelMusic->setText(QCoreApplication::translate("MainWindow", "No Flash USB Detected!", nullptr));
        usbImageLabelMusic->setText(QString());
        homeButtonBl->setText(QString());
        blueLabel->setText(QString());
        connectedBluetoothDeviceLabel->setText(QString());
        valueLabel->setText(QString());
        button1->setText(QString());
        button2->setText(QString());
        button3->setText(QString());
        button4->setText(QString());
        button5->setText(QString());
        led1->setText(QString());
        led2->setText(QString());
        led3->setText(QString());
        led4->setText(QString());
        led5->setText(QString());
        homeButtonAC->setText(QString());
        label->setText(QString());
        homeButtonCL->setText(QString());
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        button_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        button_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        button_multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        button_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        button_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        homeButtonCALC->setText(QCoreApplication::translate("MainWindow", "HOME", nullptr));
        homeButtonSt->setText(QString());
        settingsContentGroup->setTitle(QString());
        settingsPanelLabel->setText(QCoreApplication::translate("MainWindow", "Settings Panel", nullptr));
        setTimeDateGroup->setTitle(QString());
        doneTimeDateButton->setText(QString());
        cancelTimeDateButton->setText(QString());
        updateTimeDateLabel->setText(QCoreApplication::translate("MainWindow", "Time & Date", nullptr));
        settingsMainGroup->setTitle(QString());
        ThemeLabel->setText(QCoreApplication::translate("MainWindow", "Change Theme", nullptr));
        themeComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Dark", nullptr));
        themeComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Pattern", nullptr));
        themeComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Galaxy", nullptr));
        themeComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Colorful", nullptr));

        themeComboBox->setCurrentText(QCoreApplication::translate("MainWindow", "Dark", nullptr));
        setTimeDateLabel->setText(QCoreApplication::translate("MainWindow", "Time & Date", nullptr));
        setTimeDateButton->setText(QString());
        runningVideoControlGroup->setTitle(QString());
        goTovideosListButton->setText(QString());
        backwardVideoButton->setText(QString());
        stopVideoButton->setText(QString());
        playVideoButton->setText(QString());
        forwardVideoButton->setText(QString());
        volumeDownVideoButton->setText(QString());
        volumeUpVideoButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
