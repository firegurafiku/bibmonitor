#include "PendingFilesDialog.h"
#include "ui_PendingFilesDialog.h"

PendingFilesDialog::PendingFilesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PendingFilesDialog)
{
    ui->setupUi(this);
}

PendingFilesDialog::~PendingFilesDialog()
{
    delete ui;
}
