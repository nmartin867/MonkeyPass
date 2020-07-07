#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#include <QString>

struct Configuration {
    static const QString settingFileName;
    static const QString organization;
    static const QString domain;
    static const QString applicationName;
    static const QString settingsFilePath;
    static const QString applicationVersion;
    static const QString settings_password_key;

    static const int lineEditMinHeight;
    static const int pushButtonMinHeight;

    static const int pushButtonMaxWidth;
};

#endif // CONFIGURATION_H
