#include <QtWidgets>

class MyEventGenerator : public QWidget {
    Q_OBJECT
public:
    MyEventGenerator();

private:
    QLineEdit *lineEdit_;        
};
