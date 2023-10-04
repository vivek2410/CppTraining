#include "Bike.h"

Bike::Bike(std::string _id, std::string _brand, float prize, VehicleType _Vtype, BikeType Btype, float Milage) 
: Vehicle(_id, _brand, prize, _Vtype), Btype(Btype), Milage(Milage)
{
}

Bike::Bike(std::string _id, std::string _brand, VehicleType _Vtype, BikeType Btype, float Milage)
: Vehicle(_id, _brand, _Vtype), Btype(Btype), Milage(Milage)
{
}

float Bike::CalculateTax()
{
    return 34.6f * getPrize();
}
