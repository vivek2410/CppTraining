#include "Car.h"
#include "Vehicle.h"

Car::Car(std::string id, std::string brand, float price, VehicleType type, CarType ctype)
: Vehicle(id, brand, price, type), _car_type(ctype)
{
}

Car::Car(std::string id, std::string brand, VehicleType type, CarType ctype)
: Vehicle(id, brand, type), _car_type(ctype)
{
}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
     os << static_cast<const Vehicle &>(rhs)
       << " _car_type: " <<   DisplayEnum(rhs._car_type);
    return os;
}

std::string DisplayEnum(const CarType val)
{
    if(val == CarType::HATCHBACK){
        return "HATCHBACK";
    }
    else if(val == CarType::SEDAN){
        return "SEDAN";
    }
    else{
        return "SUV";
    }
}


float Car::CalculateTax()
{
    return 0.1f * price();
}