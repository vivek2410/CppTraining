#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include "type.h"

class Vehicle
{
private:
    std::string id;
    std::string name;
    type VehicleType;
    float price;

public:
    Vehicle(std::string id, std::string name, type VehicleType, float price);
    Vehicle(std::string id, std::string name, type VehicleType);

    Vehicle(const Vehicle&) = default;
    
    
    ~Vehicle() {
        std::cout<<"destructing the price memory"<<
            price
            <<"Deleted";
    }

    std::string getId() const { return id; }

    std::string getName() const { return name; }

    type vehicleType() const { return VehicleType; }

    float getPrice() const { return price; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);


};
std::string DisplayEnum(const type val);
#endif // VEHICLE_H
