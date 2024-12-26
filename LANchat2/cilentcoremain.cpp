#include "cilentcoremain.h"
#include "QDebug"




// bool Cilentcoremain::connectServer(const QHostAddress &address, const quint16 &port) {
//     // 检查格式是否正确
//     if(!address.isNull() && port > 0) {
//         qDebug() << "正在连接到服务端...";
//     } else {
//         qDebug() << "IP地址或端口号格式错误！";
//         return false;
//     }

//     serverAddress = address;
//     serverPort = port;

//     // 连接到服务端
//     //    socket.connectToHost(serverAddress.toString(), serverPort);
//     socket.connectToHostEncrypted(serverAddress.toString(), serverPort);

//     // 检查连接是否成功
//     //    if(socket.waitForConnected(3000)) {
//     if(socket.waitForEncrypted(3000)) {
//         qDebug() << "连接成功！";

//         // 测试发送数据

//         // 创建一个 JSON 对象
//         QJsonObject jsonObj;
//         jsonObj["type"] = "test";
//         jsonObj["sender"] = "request";
//         jsonObj["receiver"] = "request";
//         jsonObj["timestamp"] = "request";
//         jsonObj["content"] = "request";

//         // 创建一个嵌套的JSON数据对象
//         QJsonObject dataObj;
//         dataObj["test"] = "test";

//         // 将嵌套的JSON数据对象添加到 "data" 字段
//         jsonObj["data"] = dataObj;

//         QString response;

//         if(sendAndWait(response, jsonObj)) {
//             qDebug() << "connectServer()收到服务端消息：" << response;

//             if(!checkMessage(response, jsonObj["type"].toString(), "success")) {
//                 return false;
//             }

//             qDebug() << "收到响应：测试成功";
//         } else {
//             qDebug() << "未能接收到服务端响应";
//             return false;
//         }
//     } else {
//         qDebug() << "连接失败：" << socket.errorString();
//         return false;
//     }

//     return true;
// }




Cilentcoremain::Cilentcoremain() {
    socket =new QTcpSocket();

}

bool Cilentcoremain::connectToServer(const QString& ip,int port){
    socket->connectToHost(ip,port);

    //等待连接结果
    if(socket->waitForConnected(3000)){
        qDebug()<<"连接服务器成功："<<ip<<":"<<port;
        return true;
    }else{
        qDebug()<<"连接服务器失败："<<socket->errorString();
        return false;
    }

}

void Cilentcoremain::sendmyMessage(const QString &jsonMessage){
    if (socket->state() == QTcpSocket::ConnectedState) {
        socket->write(jsonMessage.toUtf8());  // 将消息发送给服务器
        socket->flush();
        qDebug() << "发送消息：" << jsonMessage;
    } else {
        qDebug() << "未连接服务器，无法发送消息";
    }
}

