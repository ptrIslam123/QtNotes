#include "my_event_filter.h"

MyEventFilter::MyEventFilter():
    QObject() {
}

bool MyEventFilter::eventFilter(QObject *eventReceiver, QEvent *event) {
    if (event->type() == QEvent::MouseButtonPress) {
        // if the user clicked to the mouse button
        qDebug() << "Handle mouse event from my castom event filter\n"; 
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
    }
    eventReceiver->event(event);
}
