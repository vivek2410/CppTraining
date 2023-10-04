#ifndef BIKE_H
#define BIKE_H
#include <iostream>
#include "BikeType.h"
#include "Vehicle.h"

class Bike : public Vehicle
{
private:
    BikeType Btype;
    float Milage;
public:
    Bike(std::string _id,
        std::string _brand,
        float prize,
        VehicleType _Vtype, BikeType Btype, float Milage);

    Bike(std::string _id,
        std::string _brand,
        VehicleType _Vtype, BikeType Btype, float Milage);

    float CalculateTax() override;

    ~Bike() {
        std::cout<<"Bike with id "
        << id()
        <<" is deleted";
    }
};

#endif // BIKE_H
