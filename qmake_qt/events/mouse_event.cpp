#include "mouse_event.h"

#include <iostream>

MyMouseEventHandler::MyMouseEventHandler():
    QWidget() {    
}

void MyMouseEventHandler::mouseReleaseEvent(QMouseEvent *event) {
    std::cout << "Mouse released!" << std::endl;
} 

void MyMouseEventHandler::mouseMoveEvent(QMouseEvent *event) {
    std::cout << "Mosuse moved!" << std::endl;
}

void MyMouseEventHandler::mousePressEvent(QMouseEvent *event) {
    std::cout << "Mouse pressed!" << std::endl;
}

void MyMouseEventHandler::hideEvent(QHideEvent *event) {
    std::cout << "Hide window event!" << std::endl;
}
