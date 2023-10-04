#include "Vehicle.h"
#include <iostream>
#include "VehicleType.h"

Vehicle::Vehicle(std::string id, std::string brand, float price, VehicleType type)
: _id(id), _brand(brand), _type(type), _price(price)
{
}

Vehicle::Vehicle(std::string id, std::string brand, VehicleType type)
    : _id(id), _brand(brand), _type(type)
{
}
std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs._id
       << " _brand: " << rhs._brand
       << " _price: " << rhs._price
       << " _type: " << rhs._type;
    return os;
}

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs._id
       << " _brand: " << rhs._brand
       << " _price: " << rhs._price
       << " _type: " << rhs._type;
    return os;
}
