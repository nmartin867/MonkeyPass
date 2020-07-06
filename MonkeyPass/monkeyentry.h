#ifndef MONKEYENTRY_H
#define MONKEYENTRY_H

#include <QJsonObject>
#include <QUrl>
#include <QJsonDocument>

class MonkeyEntry
{
public:
    MonkeyEntry();
    MonkeyEntry(const QJsonArray &jsonFieldValues);

    static QVector<MonkeyEntry> fromEnpassJson(const QJsonDocument &jsonDocument);

    QString username() const;
    void setUsername(const QString &username);

    QString email() const;
    void setEmail(const QString &email);

    QString password() const;
    void setPassword(const QString &password);

    QUrl website() const;
    void setWebsite(const QUrl &website);

    QString security_question() const;
    void setSecurity_question(const QString &security_question);

    QString security_answer() const;
    void setSecurity_answer(const QString &security_answer);

    QString notes() const;
    void setNotes(const QString &notes);

private:
    QString m_username;
    QString m_email;
    QString m_password;
    QUrl m_website;
    QString m_security_question;
    QString m_security_answer;
    QString m_notes;
};

#endif // MONKEYENTRY_H
