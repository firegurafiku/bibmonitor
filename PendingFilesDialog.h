#ifndef PENDINGFILESDIALOG_H
#define PENDINGFILESDIALOG_H

#include <QDialog>

namespace Ui {
class PendingFilesDialog;
}

class PendingFilesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PendingFilesDialog(QWidget *parent = 0);
    ~PendingFilesDialog();

private:
    Ui::PendingFilesDialog *ui;
};

#endif // PENDINGFILESDIALOG_H
