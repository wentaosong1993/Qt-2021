#include "AnimationWidget.h"
#include <QApplication>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AnimationWidget w;

    w.setFixedSize(1920, 1080);
    w.showFullScreen();

    return a.exec();
}
