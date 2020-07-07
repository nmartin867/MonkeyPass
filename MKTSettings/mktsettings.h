#ifndef MKTSETTINGS_H
#define MKTSETTINGS_H

#include "MKTSettings_global.h"
#include <QString>
#include <QSettings>


class MKTSETTINGS_EXPORT MKTSettings
{
public:
    MKTSettings(const QString &settingsFilePath);
    template <class T>
    T readSetting(const QString &key) const;
    template <class T>
    void writeSetting(const QString &key, T value);
    ~MKTSettings();
private:
    QString m_settings_path;
    QSettings *m_settings;

    void loadSettings();
};

#endif // MKTSETTINGS_H
