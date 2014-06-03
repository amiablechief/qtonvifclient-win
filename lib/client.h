#ifndef ONVIF_CLIENT_H
#define ONVIF_CLIENT_H

#include <QObject>
#include "qhttp.h"

namespace ONVIF {
    class Client : public QObject {
        Q_OBJECT
    public:
        explicit Client(const QString &url);
        QString sendData(const QString &data);
    private:
        void waitForFinish(const QHttp  &http);
        QString mUrl;
    };
}

#endif // ONVIF_CLIENT_H
