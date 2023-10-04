#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include "VehicleType.h"

class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    float prize;
    VehicleType _Vtype;
public:
    Vehicle(std::string _id,
            std::string _brand,
            float prize,
            VehicleType _Vtype);
            
    Vehicle(std::string _id,
            std::string _brand,
            VehicleType _Vtype);

    //Vehicle(const Vehicle& val) = default;

    virtual ~Vehicle() {
        std::cout<<"Vehicle with id: "
        << _id
        <<"Destructed";
    }
    
    virtual float CalculateTax() = 0; //<-- abstract function


    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float getPrize() const { return prize; }

    VehicleType vtype() const { return _Vtype; }
};

#endif // VEHICLE_H
