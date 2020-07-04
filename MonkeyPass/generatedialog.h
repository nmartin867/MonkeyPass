#ifndef GENERATEDIALOG_H
#define GENERATEDIALOG_H

#include <QDialog>

namespace Ui {
class GenerateDialog;
}

class GenerateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GenerateDialog(QWidget *parent = nullptr);
    ~GenerateDialog();

private slots:
    void generatePassword();
    void cancel();
    void accept();
private:
    Ui::GenerateDialog *ui;
    void initUi();

};

#endif // GENERATEDIALOG_H
