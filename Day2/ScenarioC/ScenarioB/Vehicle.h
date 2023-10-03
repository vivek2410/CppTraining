#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
//#include "Type.h"
#include "VehicleType.h"

class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    float _price;
    VehicleType _type;
public:
    Vehicle(const Vehicle& obj)= default;
    Vehicle(std::string id, std::string brand, float price, VehicleType type);
    Vehicle(std::string id, std::string brand, VehicleType type);

    virtual float CalculateTax() = 0;

    //if we using upcasting in cpp then try to change parent class destructor to virtual
    virtual ~Vehicle() {
        std::cout
        <<"Object with ID:"
        <<_id
        <<"is dest";
    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);

    
};
std::string DisplayEnum(const VehicleType val);

#endif // VEHICLE_H
