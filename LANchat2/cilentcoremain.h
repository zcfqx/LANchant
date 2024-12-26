#ifndef CILENTCOREMAIN_H
#define CILENTCOREMAIN_H

#include <QtNetwork> // 包含Qt网络模块
#include <QJsonObject> // 包含Qt的JSON对象类
#include <QJsonDocument> // 包含Qt的JSON文档类
#include <QEventLoop> // 包含Qt的事件循环类
#include <qstring.h>
#include <QTcpSocket>
#include "message.h"

class Cilentcoremain
{
public:
    Cilentcoremain();

    // 连接服务器的方法
    bool connectToServer(const QString &ip, int port); // 连接服务器
    void sendmyMessage(const QString &jsonMessage);

public:
    QTcpSocket *socket;


};

#endif // CILENTCOREMAIN_H
