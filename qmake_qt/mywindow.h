#include <QtWidgets>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QTextDocumentWriter>

class MyWindow : public QWidget {
    Q_OBJECT    
public:
    MyWindow();
    virtual ~MyWindow();

private slots:
    // push button
    void changeBackgroundColor();
    // progress bar
    void progressStep();
    void progressBack();
    // line edit


private:
    QPushButton *btn_;
    QPushButton *incr_;
    QPushButton *decr_;    
    QProgressBar *progressBar_;
    int progress_;
    QTextEdit *textEdit_;
    QTextDocumentWriter *docWriter_;
};
