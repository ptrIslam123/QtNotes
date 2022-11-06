#include "my_event.h"

MyEventHandler::MyEventHandler():
    QWidget() {    
}

bool MyEventHandler::event(QEvent *event) {
    if (event->type() == QEvent::Hide) {
        qDebug() << "QEvent::Hide\n"; 
        QHideEvent *hideEvent = static_cast<QHideEvent*>(event);
        // TODO something
    }

    return QWidget::event(event);
}
