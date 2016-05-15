#ifndef VISUDP_H
#define VISUDP_H

#include <QObject>
#include <QUdpSocket>

class VisUDP : public QObject
{
    Q_OBJECT
public:
    explicit VisUDP(QObject *parent = 0);

signals:

public slots:
    //void readDatagram();
    //void sendDatagram(LinkInterface* link,mavlink_message_t message);

private:
    QUdpSocket *socket;

};

#endif // VISUDP_H
