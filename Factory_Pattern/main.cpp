#include <QGuiApplication>

#include <QDebug>

#include "factory.h"
#include "ConcreteProduct.h"
#include <iostream>

using namespace std;


#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete p; p = nullptr;}}
#endif


int main(int argc, char* argv[])
{
    QCoreApplication app(argc, argv);

    Factory* pFactory = new Factory();

    ICar* pBenzCar = pFactory->creatorCar(CAT_TYPE::BENZ);
    ICar* pBmwCar = pFactory->creatorCar(CAT_TYPE::BMW);
    ICar* pAudiCar = pFactory->creatorCar(CAT_TYPE::AUDI);


    cout << pBenzCar->name() << endl;
    cout << pBmwCar->name() << endl;
    cout << pAudiCar->name() << endl;

    cout << "Hello Factory Pattern";

    SAFE_DELETE(pBenzCar);

    SAFE_DELETE(pBmwCar);

    SAFE_DELETE(pAudiCar);

    SAFE_DELETE(pFactory);


    return app.exec();
}


