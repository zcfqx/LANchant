#ifndef MESSAGE_H
#define MESSAGE_H

#include <QString>
#include <QJsonObject>
#include <QJsonDocument>
#include <QDateTime>

class Message
{
public:
    // 数据成员
    QString type;       // 消息类型
    QString sender;     // 发送者
    QString receiver;   // 接收者
    QString timestamp;  // 时间戳
    QString content;    // 消息内容

    // 构造函数
    Message(const QString &type = "",
            const QString &sender = "",
            const QString &receiver = "",
            const QString &timestamp ="",      // 时间戳
            const QString &content = "")
    {
        this->type = type;
        this->sender = sender;
        this->receiver = receiver;
        this->timestamp = timestamp;
        this->content = content;
        this->timestamp = QString::number(QDateTime::currentSecsSinceEpoch()); // 默认使用当前时间戳
    }

    // 将消息转为 JSON 格式字符串
    QString toJson() const
    {
        QJsonObject jsonObj;
        jsonObj["type"] = type;
        jsonObj["sender"] = sender;
        jsonObj["receiver"] = receiver;
        jsonObj["timestamp"] = timestamp;
        jsonObj["content"] = content;

        QJsonDocument doc(jsonObj);
        return QString(doc.toJson(QJsonDocument::Compact));
    }

    // 从 JSON 格式字符串解析为对象
    static Message fromJson(const QString &jsonStr)
    {
        QJsonDocument doc = QJsonDocument::fromJson(jsonStr.toUtf8());
        QJsonObject jsonObj = doc.object();

        return Message(
            jsonObj["type"].toString(),
            jsonObj["sender"].toString(),
            jsonObj["receiver"].toString(),
            jsonObj["timestamp"].toString(),
            jsonObj["content"].toString()
            );
    }
};

#endif // MESSAGE_H
