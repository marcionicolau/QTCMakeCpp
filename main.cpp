#include <QApplication>
#include <QDebug>
#include <QtGui>
#include <QtWidgets/QPushButton>

//using namespace std;

int main(int argc, char *argv[]) {
//    qDebug() << QT_VERSION_STR;
//    QApplication app(argc, argv);
//    QPushButton *button = new QPushButton("Hello World");
//    button->show();
    QCoreApplication app(argc, argv);

//    qDebug() << QT_VERSION_STR;

    qDebug() << "Hello World";

    return app.exec();
//    return 0;
}