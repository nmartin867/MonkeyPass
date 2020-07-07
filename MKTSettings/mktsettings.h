#ifndef MKTSETTINGS_H
#define MKTSETTINGS_H

#include "MKTSettings_global.h"
#include <QString>
#include <QSettings>
#include <QVariant>


class MKTSETTINGS_EXPORT MKTSettings
{
public:
    MKTSettings(const QString &settingsFilePath);
    bool exists(const QString &key);
    QVariant readSetting(const QString &key) const;
    void writeSetting(const QString &key, const QVariant &value);
    ~MKTSettings();
private:
    QString m_settings_path;
    QSettings *m_settings;

    void loadSettings();
};

#endif // MKTSETTINGS_H
