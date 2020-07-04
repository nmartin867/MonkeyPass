#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#include <QString>

struct Configuration {
    static const QString keyFileName;
    static const QString organization;
    static const QString domain;
    static const QString applicationName;
    static const QString applicationVersion;

    static const int lineEditMinHeight;
    static const int pushButtonMinHeight;

    static const int pushButtonMaxWidth;
};

#endif // CONFIGURATION_H
