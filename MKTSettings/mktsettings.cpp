#include "mktsettings.h"
#include <QFile>

MKTSettings::MKTSettings(const QString &settingsFilePath)
{
    m_settings_path = settingsFilePath;
    loadSettings();
}

void MKTSettings::loadSettings()
{
    auto settingsFile = new QFile(m_settings_path);
    if(settingsFile->open(QIODevice::ReadWrite)) {
       m_settings = new QSettings(m_settings_path, QSettings::NativeFormat);
    } else {
         //TODO: show error
    }
}

template <class T>
T MKTSettings::readSetting(const QString &key) const
{
    return m_settings->value(key);
}

template <class T>
void MKTSettings::writeSetting(const QString &key, T value)
{
    m_settings->setValue(key, value);
}

MKTSettings::~MKTSettings(){
    delete m_settings;
}

