#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "VehicleType.h"

class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    float _price;
    VehicleType _type;
public:
    Vehicle() = delete; //disabled default constructor
    Vehicle(const Vehicle&) = default; //defaulted copy constructor
    ~Vehicle() {
        std::cout
        <<"Vehicle with ID: "
        <<_id
        <<" is destroyed\n";
    }

    Vehicle(
        std::string _id,
        std::string _brand,
        float _price,
        VehicleType _type
    );

    float CalculateTax();
    float CalculateTax(float tax_percent);
    float CalculateTax(float cgst, float sgst);

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);
   
};
std::string DisplayEnum(const VehicleType val);

#endif // VEHICLE_H
