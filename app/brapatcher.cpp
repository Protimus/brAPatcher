#include "interface.h"
#include <iostream>
#include <QApplication>
#include <QFile>
#include <QTextStream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QFile f(":style/ancient.qss");
    if (!f.exists())
    {
        cout << "Unable to set stylesheet, file not found\n";
    }
    else
    {
        f.open(QFile::ReadOnly | QFile::Text);
        QTextStream ts(&f);
        qApp->setStyleSheet(ts.readAll());
    }

    return a.exec();
}
