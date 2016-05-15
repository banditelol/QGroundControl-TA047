#include "visudp.h"

VisUDP::VisUDP(QObject *parent) : QObject(parent)
{
    //socket = new QUdpSocket(this);
    //socket->bind(QHostAddress::LocalHost,1234);
    //connect(protocol, &MAVLinkProtocol::messageReceived, this, &VisUDP::sendDatagram());
}
/*
void VisUDP::readDatagram()
{


}

void VisUDP::sendDatagram(LinkInterface* link,mavlink_message_t message)
{
    QByteArray Data;

}
*/
