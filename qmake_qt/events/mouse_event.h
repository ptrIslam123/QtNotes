#include <QtWidgets>


class MyMouseEventHandler : public QWidget {
    Q_OBJECT
public:
    MyMouseEventHandler();

protected:
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);

    // other event
    virtual void hideEvent(QHideEvent *event);
};
