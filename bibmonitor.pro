#-------------------------------------------------
#
# Project created by QtCreator 2015-07-16T00:16:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bibmonitor
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    SettingsDialog.cpp

HEADERS  += \
    MainWindow.h \
    SettingsDialog.h

FORMS    += \
    MainWindow.ui \
    SettingsDialog.ui

DISTFILES += \
    README.md
