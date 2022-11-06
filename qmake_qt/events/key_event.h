#include <QtWidgets>

class MyKeyboardWidget : public QWidget {
    Q_OBJECT
public:
    MyKeyboardWidget();

protected:
    void keyPressEvent(QKeyEvent *event);
    bool eventFilter(QWidget *obj, QEvent *event);
};
