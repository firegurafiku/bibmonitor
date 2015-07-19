#include "SettingsDialog.h"
#include "ui_SettingsDialog.h"

SettingsDialog::SettingsDialog(QWidget *parent)
    : QDialog(parent)
{
    ui = QSharedPointer<Ui::SettingsDialog>::create();
    ui->setupUi(this);
}
