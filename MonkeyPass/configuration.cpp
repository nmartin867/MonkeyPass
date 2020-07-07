#include "configuration.h"
#include <QStringLiteral>
#include <QStandardPaths>

const QString Configuration::organization = QString(QStringLiteral("MonkeyManTech"));
const QString Configuration::applicationName = QString(QStringLiteral("MonkeyPass"));
const QString Configuration::domain = QString(QStringLiteral("monkeymantech.com"));
const QString Configuration::settingFileName = QString(QStringLiteral("mp_settings"));
const QString Configuration::settingsFilePath = QStandardPaths::writableLocation(QStandardPaths::DataLocation);
const QString Configuration::applicationVersion = QString(QStringLiteral("1.0.0"));
const QString Configuration::settings_password_key = QString("MKT/password");


const int Configuration::lineEditMinHeight = 50;
const int Configuration::pushButtonMinHeight = 50;
const int Configuration::pushButtonMaxWidth = 100;
