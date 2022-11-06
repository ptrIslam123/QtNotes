#include <QtWidgets>

class MyEventHandler : public QWidget {
    Q_OBJECT
public:
    MyEventHandler();

protected:
    virtual bool event(QEvent *event);
};
