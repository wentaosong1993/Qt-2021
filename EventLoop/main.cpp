#include <QApplication>
#include "TextWidget.h"


int main(int argc,char* argv[])
{
    QApplication a(argc, argv);

    TextWidget w;
    w.show();
    return a.exec();
}
