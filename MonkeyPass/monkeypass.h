#ifndef MONKEYPASS_H
#define MONKEYPASS_H

#include <QMainWindow>
#include "passfilemanager.h"

namespace Ui {
class MonkeyPass;
}

class MonkeyPass : public QMainWindow
{
    Q_OBJECT

public:
    explicit MonkeyPass(QWidget *parent = nullptr);
    ~MonkeyPass();

private:
    Ui::MonkeyPass *ui;
    PassFileManager *passFileManger;

    QString  masterPassword;
    QString  newPassword;
    QString  passwordConfirm;

    bool formValid;

    void initCreateForm ();
    void initLoginForm();

    void onMasterPasswordChange();
    void onNewPasswordChange();
    void onPasswordConfirmChange();

    void validateForm();
    bool creationPasswordsMatch();
    void createNewAccount(); 

private slots:
     void showGenerateDialog();
};

#endif // MONKEYPASS_H
