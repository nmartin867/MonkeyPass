#include "mktsettings.h"
#include <QFile>

MKTSettings::MKTSettings(const QString &settingsFilePath)
{
    m_settings_path = settingsFilePath;
    loadSettings();
}

bool MKTSettings::exists(const QString &key)
{
    return m_settings->contains(key);
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

QVariant MKTSettings::readSetting(const QString &key) const
{
    return m_settings->value(key, 0);
}

void MKTSettings::writeSetting(const QString &key, QVariant &value)
{
    m_settings->setValue(key, value);
}

MKTSettings::~MKTSettings(){
    delete m_settings;
}

