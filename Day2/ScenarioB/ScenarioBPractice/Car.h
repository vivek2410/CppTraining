#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "CarType.h"
#include "Vehicle.h"
#include "VehicleType.h"

class Car : public Vehicle
{
private:
    CarType Ctype;
public:
    Car(std::string _id,
        std::string _name,
        float Prize,
        VehicleType Vtype, 
        CarType Ctype);

    Car(std::string _id,
        std::string _name,
        VehicleType Vtype, 
        CarType Ctype);

    ~Car() {
        std::cout<<"Car with id "
        << id()
        <<"is deleting";
    }

    float CalculateTax() override;

};

#endif // CAR_H
