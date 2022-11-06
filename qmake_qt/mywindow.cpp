#include "mywindow.h"

#include <iostream>

#include <QString>

MyWindow::MyWindow(): 
    QWidget(),
    btn_(new QPushButton("click", this)),
    incr_(new QPushButton("increase", this)),
    decr_(new QPushButton("decrise", this)),
    progressBar_(new QProgressBar(this)),
    progress_(0),
    textEdit_(new QTextEdit(QString("begin some text string!"), this)),
    docWriter_(new QTextDocumentWriter()){
    setGeometry(100, 100, 500, 600);
    btn_->setGeometry(300, 50, 100, 30);
    incr_->setGeometry(50, 20, 100, 50);
    decr_->setGeometry(150, 20, 100, 50);
    progressBar_->setRange(0, 5);
    textEdit_->setGeometry(50, 70, 80, 80);

    connect(btn_, &QPushButton::clicked, this, &MyWindow::changeBackgroundColor);
    connect(incr_, &QPushButton::clicked, this, &MyWindow::progressStep);
    connect(decr_, &QPushButton::clicked, this, &MyWindow::progressBack);
}

MyWindow::~MyWindow() {}

void MyWindow::progressStep() {
    progressBar_->setValue(++progress_);
}

void MyWindow::progressBack() {
    progress_ = 0;
    progressBar_->reset();
}

void MyWindow::changeBackgroundColor() {
    std::cout << "Change backround color for windget event!" << std::endl;
    docWriter_->setFormat("odt");
    docWriter_->setFileName("outputfile.odt");
    docWriter_->write(textEdit_->document());
    textEdit_->setPlainText("Hello world!");
    textEdit_->insertHtml("<h1>I hate It job!</h1>");
    
    /*
    QPalette pal;:24
    pal.setColor(QPalette::Window, Qt::blue);
    setPalette(pal);
    */
}
