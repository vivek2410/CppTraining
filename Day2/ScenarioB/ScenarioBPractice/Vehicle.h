#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include "VehicleType.h"

class Vehicle
{
private:
    std::string _id;
    std::string _name;
    float Prize;
    VehicleType Vtype;

public:
    Vehicle(std::string _id,
            std::string _name,
            float Prize,
            VehicleType Vtype);
    
    Vehicle(std::string _id,
            std::string _name,
            VehicleType Vtype);

    virtual float CalculateTax()=0; //abstract function

    ~Vehicle() {
        std::cout<<"Vehicle with id no "
        << _id
        <<"is deleted";
    }

    std::string id() const { return _id; }
    std::string name() const { return _name; }
    float prize() const { return Prize; }
    VehicleType vtype() const { return Vtype; }
};

#endif // VEHICLE_H
