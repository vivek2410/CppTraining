#include "Vehicle.h"

Vehicle::Vehicle(std::string id, std::string name, type VehicleType, float price)
: id(id), name(name), VehicleType(VehicleType), price(price)
{
}

Vehicle::Vehicle(std::string id, std::string name, type VehicleType)
: id(id), name(name), VehicleType(VehicleType)
{
}

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "id: " << rhs.id
       << " name: " << rhs.name
       << " VehicleType: " << DisplayEnum(rhs.VehicleType)
       << " price: " << rhs.price;
    return os;
}

std::string DisplayEnum(const type val)
{
    if(val == type::MARUTHI){
        return "yolo";
    }
    else if(val == type::SUZUKI){
        return "SUZUKI";
    }
    else{
        return "SWIFT";
    }
}



