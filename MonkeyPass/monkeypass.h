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
    PassFileManager *m_passFileManger;

    // ui widgets
    QString  m_masterPassword;
    QString  m_newPassword;
    QString  m_passwordConfirm;

    // menui actions
    QAction *m_enpass_import;


    bool formValid;

    void initCreateForm ();
    void initLoginForm();

    void onMasterPasswordChange();
    void onNewPasswordChange();
    void onPasswordConfirmChange();

    void validateForm();
    bool creationPasswordsMatch();
    void createNewAccount(); 

    void createMenuItems();
    void createMenuActions();
private slots:
     void showGenerateDialog();
     void on_actionImport_Enpass_File_triggered();
};

#endif // MONKEYPASS_H
