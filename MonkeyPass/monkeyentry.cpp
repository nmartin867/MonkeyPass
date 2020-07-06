#include "monkeyentry.h"
#include <QJsonArray>
#include <QVector>
#include <QMap>
#include <QUrl>
#include <QDebug>

MonkeyEntry::MonkeyEntry()
{

}

MonkeyEntry::MonkeyEntry(const QJsonArray &jsonFieldValues)
{
    QMap<QString, QJsonValue> fieldMap;
    foreach(const QJsonValue &jsonValue, jsonFieldValues) {
        auto json_obj = jsonValue.toObject();
        fieldMap[json_obj["label"].toString()] = json_obj.value("value");
    }

    m_username = fieldMap["Username"].toString();
    m_email = fieldMap["E-mail"].toString();
    m_website = QUrl::fromUserInput(fieldMap["Website"].toString());
    m_password = fieldMap["Password"].toString();
    m_security_question = fieldMap["Security question"].toString();
    m_security_answer = fieldMap["Security answer"].toString();

}

QVector<MonkeyEntry> MonkeyEntry::fromEnpassJson(const QJsonDocument &jsonDocument)
{
    QVector<MonkeyEntry> entryList;
    auto json_object = jsonDocument.object();
    auto item_array = json_object.value("items").toArray();
    foreach(const QJsonValue &item, item_array) {
        entryList.append(MonkeyEntry(item.toObject()["fields"].toArray()));
    }
    return entryList;
}

QString MonkeyEntry::username() const
{
    return m_username;
}

void MonkeyEntry::setUsername(const QString &username)
{
    m_username = username;
}

QString MonkeyEntry::email() const
{
    return m_email;
}

void MonkeyEntry::setEmail(const QString &email)
{
    m_email = email;
}

QString MonkeyEntry::password() const
{
    return m_password;
}

void MonkeyEntry::setPassword(const QString &password)
{
    m_password = password;
}

QUrl MonkeyEntry::website() const
{
    return m_website;
}

void MonkeyEntry::setWebsite(const QUrl &website)
{
    m_website = website;
}

QString MonkeyEntry::security_question() const
{
    return m_security_question;
}

void MonkeyEntry::setSecurity_question(const QString &security_question)
{
    m_security_question = security_question;
}

QString MonkeyEntry::security_answer() const
{
    return m_security_answer;
}

void MonkeyEntry::setSecurity_answer(const QString &security_answer)
{
    m_security_answer = security_answer;
}

QString MonkeyEntry::notes() const
{
    return m_notes;
}

void MonkeyEntry::setNotes(const QString &notes)
{
    m_notes = notes;
}
