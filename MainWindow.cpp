#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QDialog(parent)
{
    ui = QSharedPointer<Ui::MainWindow>::create();
    ui->setupUi(this);
}
