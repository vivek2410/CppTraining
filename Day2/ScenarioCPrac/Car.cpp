#include "Car.h"
#include "Vehicle.h"

Car::Car(std::string _id, std::string _brand, float prize, VehicleType _Vtype, CarType Ctype)
: Vehicle(_id, _brand, prize, _Vtype), Ctype(Ctype)
{
}

Car::Car(std::string _id, std::string _brand, VehicleType _Vtype, CarType Ctype)
: Vehicle(_id, _brand, _Vtype), Ctype(Ctype)
{
}

float Car::CalculateTax()
{
    return 18.4f * getPrize();
}
