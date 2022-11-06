#include "shapes.h"

MyGlContext::MyGlContext():
    QWidget() {
    setGeometry(100, 100, 500, 500); 
}

void MyGlContext::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setPen(QPen(Qt::white, 3));
    
    // drawing circle
    int n = 8;
    for (int i = 0; i < n; ++i) {
        qreal fAngle = 2 * 3.14 * i / n;
        qreal x = 50 + cos(fAngle) * 40;
        qreal y = 50 + sin(fAngle) * 40;
        painter.drawPoint(QPointF(x, y));
    }

    // darwing line
    painter.drawLine(QPointF(50, 50), QPointF(100, 100));

    // set hints for render (It was done to avoid aliasing)
    painter . setRenderHint(QPainter::Antialiasing, true);

    // drawing rect
    QBrush brush(QColor(0, 255, 255, 255), Qt::Dense4Pattern);
    painter.setBrush(brush); // set pen (карандаш)
    painter.setPen(QPen(Qt::yellow, 3)); // set brush (кисть)
    painter.drawRect(200, 200, 100, 100);

    // drawing polygon
    painter.setBrush(QBrush(Qt::lightGray));
    painter.setPen (QPen(Qt::black) );
    n = 8;
    const auto start = 300; // this need for shifting shape(polygon). You can remote satrt from calculations of x and y
    QPolygonF polygon;
    for (int i = 0; i < n; ++i) {
        qreal fAngle =2 * 3.14 * i / n;
        qreal x = start + 50 + cos (fAngle) * 40;
        qreal y = start + 50 + sin(fAngle) * 40;
        polygon << QPointF(x, y);
    }
    painter.drawPolygon(polygon);

    // transformation of the shapes on the screen
    painter.scale(5, 5);
    painter.rotate(15);
    // or you can transform the shapens on the screen using matrix
    QTransform mat;
    mat.scale(0.5, 2);
    mat.rotate(15);
    painter.setTransform(mat);
}
