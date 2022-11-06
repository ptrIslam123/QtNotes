#include "key_event.h"

#include <QString>

#include <iostream>

MyKeyboardWidget::MyKeyboardWidget():
    QWidget() {
}

void MyKeyboardWidget::keyPressEvent(QKeyEvent *event) {
    const int keyCode = event->key();
    const QString asciCode = event->text();
    qDebug() << "key code: " << keyCode << "\tasci code: " << asciCode << "\n";
}

bool MyKeyboardWidget::eventFilter(QWidget *obj, QEvent *event) {
    // TODO
}
