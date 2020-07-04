#ifndef PASSFILEMANAGER_H
#define PASSFILEMANAGER_H
#include <QString>

class PassFileManager
{
public:
    PassFileManager();
    bool keyFileExists();

private:
    QString storagePath;

    void createKeyFile();
};

#endif // PASSFILEMANAGER_H
