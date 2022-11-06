#include <QtWidgets>
#include <QPushButton>
#include <QLabel>
#include <QDebug>
#include <QPalette>
#include <QBoxLayout>
#include <QGridLayout>

#include <string>
#include <iostream>

class Window : public QWidget {
public:
    Window(): 
    QWidget(),
    btn1(new QPushButton("btn1")),
    btn2(new QPushButton("btn2")),
    btn3(new QPushButton("btn3")),
    btn4(new QPushButton("btn4")) {
        setGeometry(100, 100, 500, 600);
        setWindowTitle("the window");

        btn1->resize(100, 50);
        btn1->show();

        btn2->resize(100, 50);
        btn2->show();

        btn3->resize(100, 50);
        btn3->show();

        QLayout *lyt1 = new QHBoxLayout();
        lyt1->addWidget(btn1);
        lyt1->addWidget(btn2);
        
        QLayout *lyt2 = new QHBoxLayout();
        lyt2->addWidget(btn3);
        lyt2->addWidget(btn4);
        
        QLayout *mainLyt = new QVBoxLayout();
        mainLyt->addWidget();

        setLayout(lyt1);
    }
    

private:
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
};


int main(int argc, char **argv) {
    qDebug() <<  "Start Qt program\n";

    QApplication app(argc, argv);
    QWidget *window = new Window();
    window->show();
    return app.exec();
}
