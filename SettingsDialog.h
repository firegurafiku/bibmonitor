#ifndef SETTINGS_DIALOG_H_
#define SETTINGS_DIALOG_H_

#include <QDialog>

namespace Ui {
    class SettingsDialog;
}

class SettingsDialog: public QDialog {
Q_OBJECT

public:
    explicit SettingsDialog(QWidget *parent = 0);

private:
    QSharedPointer<Ui::SettingsDialog> ui;
};

#endif
