#include "Vehicle.h"

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs._id
       << " _brand: " << rhs._brand
       << " _price: " << rhs._price
       << " _type: " << DisplayEnum(rhs._type);
    return os;
}

std::string DisplayEnum(const VehicleType val)
{
    if(val == VehicleType::BIKE){
        return "BIKE";
    }
    else if(val == VehicleType::CAR){
        return "CAR";
    }
    else{
        return "OTHER";
    }
}


Vehicle::Vehicle(std::string _id, std::string _brand, float _price, VehicleType _type)
{
}

float Vehicle::CalculateTax()
{
    return 0.18f * price();
}

float Vehicle::CalculateTax(float tax_percent)
{
    return tax_percent * price();
}

float Vehicle::CalculateTax(float cgst, float sgst)
{
    return (cgst * price()) + (sgst * price());
}
