#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "CarType.h"
#include "VehicleType.h"
#include "Vehicle.h"

class Car : public Vehicle
{
private:
    CarType Ctype;
public:
    Car(std::string _id,
        std::string _brand,
        float prize,
        VehicleType _Vtype, CarType Ctype);
    
    Car(std::string _id,
        std::string _brand,
        VehicleType _Vtype, 
        CarType Ctype);

    float CalculateTax() override;

    ~Car() {
        std::cout<<"Car with is"
        << id()
        <<"Destructed";
    }
};

#endif // CAR_H
