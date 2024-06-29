cmake_minimum_required(VERSION 3.5)

project(IVI_Qt VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_PREFIX_PATH "/home/hoda/Qt/5.15.2/gcc_64/lib/cmake")

find_package(Qt5 REQUIRED COMPONENTS Widgets Multimedia MultimediaWidgets Network)
message(STATUS "QT_VERSION_MAJOR: ${QT_VERSION_MAJOR}")

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    availabletargets.h
    systeminterface.h
    targetconfiguration.h
    systeminterface.cpp
    background.qrc
    musicfiles.qrc
    icons.qrc
)

add_executable(IVI_Qt
    ${PROJECT_SOURCES}
    SDconfiguration.h

)

target_link_libraries(IVI_Qt PRIVATE Qt5::Widgets Qt5::Multimedia Qt5::MultimediaWidgets Qt5::Network)

set_target_properties(IVI_Qt PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.IVI_Qt
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS IVI_Qt
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

