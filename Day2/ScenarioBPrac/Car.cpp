#include "Car.h"
#include "Vehicle.h"
Car::Car(std::string _id, std::string _name, float Prize, VehicleType Vtype, CarType Ctype)
 : Vehicle(_id, _name, Prize, Vtype), Ctype(Ctype)
{
}

Car::Car(std::string _id, std::string _name, VehicleType Vtype, CarType Ctype)
: Vehicle(_id, _name, Vtype), Ctype(Ctype)
{
}

float Car::CalculateTax()
{
    return 11.8f * prize();
}

