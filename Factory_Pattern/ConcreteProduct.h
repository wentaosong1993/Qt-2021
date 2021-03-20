#ifndef CONCRETEPRODUCT_H
#define CONCRETEPRODUCT_H


#include "Product.h"

class BenzCar: public ICar
{
public:
    string name() override
    {
        return "BenzCar";
    }

};

// 宝马汽车
class BmwCar : public ICar
{
public:
    string name() override {
        return "Bmw Car";
    }
};

// 奥迪汽车
class AudiCar : public ICar
{
public:
    string name() override {
        return "Audi Car";
    }
};

#endif // CONCRETEPRODUCT_H
