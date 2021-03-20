#ifndef FACTORY_H
#define FACTORY_H

#include "ConcreteProduct.h"

enum class CAT_TYPE
{
    BENZ,  // 奔驰汽车
    BMW,   // 宝马汽车
    AUDI   // 奥迪汽车
};

class Factory
{
public:
    ICar* creatorCar(CAT_TYPE type)
    {
        ICar* pCar = nullptr;
        switch(type)
        {
        case CAT_TYPE::BENZ:
        {
            pCar = new BenzCar;
        }
            break;
        case CAT_TYPE::BMW:
        {
            pCar = new BmwCar;
        }
            break;
        case CAT_TYPE::AUDI:
        {
            pCar = new AudiCar;
        }
            break;
        default:
            break;
        }

        return pCar;
    }

//private:
//    ICar* pCar;
};

#endif // FACTORY_H
