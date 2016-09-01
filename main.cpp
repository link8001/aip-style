#include "CWinStyle.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    CWinStyle w;
    w.show();

    return a.exec();
}
