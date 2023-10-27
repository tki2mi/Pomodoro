#include "mainwindow.h"

#include <QApplication>
#include <QFile>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile styleFile(":/styles/stylle.qss");
    styleFile.open(QFile::ReadOnly | QFile::Text);
    QTextStream styleStream(&styleFile);
    qApp->setStyleSheet(styleStream.readAll());
    MainWindow w;
    w.show();
    return a.exec();
}
