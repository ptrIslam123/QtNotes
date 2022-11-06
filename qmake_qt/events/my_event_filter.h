#include <QtWidgets>

class MyEventFilter : public QObject {
    Q_OBJECT
public:
    MyEventFilter();

protected:
    virtual bool eventFilter(QObject *eventReceiver, QEvent *event);
};
