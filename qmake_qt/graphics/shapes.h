#include <QtWidgets>

class MyGlContext : public QWidget {
public:
    MyGlContext();

protected:
    virtual void paintEvent(QPaintEvent *event);
};
