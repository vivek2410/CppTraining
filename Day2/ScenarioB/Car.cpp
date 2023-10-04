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
float Car::CalculateTax(){
    return 0.0f * price();
}