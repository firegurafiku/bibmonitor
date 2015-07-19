#include "Application.h"

Application::Application(int &argc, char **argv)
    : QApplication(argc, argv)
{
    trayIconMenu.addAction(tr("Resume skipped files..."),
                           &mainWindow, SLOT(show()));
    trayIconMenu.addAction(tr("Pending files..."),
                           &pendingFilesDialog, SLOT(show()) );
    trayIconMenu.addAction(tr("Settings..."),
                           &settingsDialog, SLOT(show()));

    trayIconMenu.addSeparator();
    trayIconMenu.addAction(tr("Quit"), this, SLOT(quit()));

    trayIcon.setContextMenu(&trayIconMenu);
    trayIcon.setIcon(QIcon(":/book-open-next.png"));
    trayIcon.setParent(this);
    trayIcon.setVisible(true);

    setQuitOnLastWindowClosed(false);
}
