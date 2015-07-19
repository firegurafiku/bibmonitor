#pragma once
#include <QApplication>
#include <QMenu>
#include <QSystemTrayIcon>
#include "MainWindow.h"
#include "PendingFilesDialog.h"
#include "SettingsDialog.h"

class Application: public QApplication {
Q_OBJECT

public:
    explicit Application(int& argc, char** argv);

private:
    QMenu              trayIconMenu;
    QSystemTrayIcon    trayIcon;
    MainWindow         mainWindow;
    SettingsDialog     settingsDialog;
    PendingFilesDialog pendingFilesDialog;
};
