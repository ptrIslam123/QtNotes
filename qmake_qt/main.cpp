#include <QtWidgets>
#include <QPushButton>
#include <QSplitter>
#include <QLayout>
#include <QProgressBar>
#include <QTableWidget>
#include <QStringList>
#include <QComboBox>

#include "mywindow.h"

#include "events/key_event.h" 
#include "events/mouse_event.h"
#include "events/my_event.h"
#include "events/my_event_filter.h"
#include "events/my_event_generator.h"

#include "graphics/shapes.h"

int main(int argc, char **argv) {
    QApplication app(argc, argv);
    
    MyGlContext *gContext = new MyGlContext();
    gContext->show();

    /*
    MyEventGenerator *myEventGen = new MyEventGenerator();
    myEventGen->setGeometry(0, 0, 300, 300);
    myEventGen->show();
    */

    /*
    QWidget *w = new QWidget();
    w->installEventFilter(new MyEventFilter());
    w->setGeometry(10, 20, 100, 100);
    w->show();
    */

    /*
    MyEventHandler *me = new MyEventHandler();
    me->setGeometry(300, 300, 300, 300);
    me->show();
    */

    /*    
    QWidget *m = new MyWindow();
    m->show();
    */
    
    /*
    MyMouseEventHandler *m = new MyMouseEventHandler();
    m->setGeometry(300, 200, 300, 300);
    m->show();
    */

    /*
    MyKeyboardWidget *k = new MyKeyboardWidget();
    k->setGeometry(300, 200, 400, 400);
    k->show();
    */

    /*
    QSplitter *s = new QSplitter();
    s->setGeometry(10, 50, 200, 100);
    s->show();

    QWidget *btn1 = new QPushButton("btn1");
    QWidget *btn2 = new QPushButton("btn2");
    QProgressBar *progress = new QProgressBar();
    progress->setOrientation(Qt::Horizontal);

    QWidget *lbl = new QLabel("&Hello world:");
    QGridLayout *layout = new QGridLayout(); 

    layout->addWidget(btn1, 0, 0);
    layout->addWidget(btn2, 0, 1);
    layout->addWidget(lbl, 1, 0);

    QWidget *w = new QWidget();
    w->resize(100, 200);
    w->show();
    w->setLayout(layout);

    s->addWidget(w);
    s->addWidget(progress);
    **/
    return app.exec();
}
