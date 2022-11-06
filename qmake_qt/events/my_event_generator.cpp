#include "my_event_generator.h"

MyEventGenerator::MyEventGenerator():
    QWidget(),
    lineEdit_(new QLineEdit(this)) {
    lineEdit_->setGeometry(10, 10, 100, 20);

    const auto keyCode = Qt::Key_A;
    const QChar asciCode = 65;
    QKeyEvent pressEvent(QEvent::KeyPress, keyCode, Qt::NoModifier, asciCode);
    QApplication::sendEvent(lineEdit_, &pressEvent);

    QKeyEvent releaseEvent(QEvent::KeyRelease, keyCode, Qt::NoModifier, asciCode);
    QApplication::sendEvent(lineEdit_, &releaseEvent);    
}


