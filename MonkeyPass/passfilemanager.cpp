#include "passfilemanager.h"
#include "configuration.h"
#include <QStandardPaths>
#include <QtDebug>
#include <QDir>
#include <QFileInfo>
#include <QIODevice>

PassFileManager::PassFileManager()
{
    storagePath = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
}

bool PassFileManager::keyFileExists() {
   QString filePath = storagePath + "/" + Configuration::keyFileName;
   qDebug() << "Key File Path: " << QDir::currentPath() << "\n";
   return QFileInfo::exists(filePath);
}


void PassFileManager::createKeyFile() {
    if (storagePath.isEmpty()) qFatal("Cannot determine settings storage location");
    QDir d{storagePath};
    if (d.mkpath(d.absolutePath()) && QDir::setCurrent(d.absolutePath())){
        qDebug() << "Current Directory: " << QDir::currentPath();
    }
    QFile f{storagePath + "/" + Configuration::keyFileName};
    if (f.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        qDebug() << "Key File Ready!\n";
    }
}
