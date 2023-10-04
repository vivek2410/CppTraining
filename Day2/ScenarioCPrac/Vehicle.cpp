#include "Vehicle.h"

Vehicle::Vehicle(std::string _id, std::string _brand, float prize, VehicleType _Vtype)
: _id(_id), _brand(_brand), prize(prize), _Vtype(_Vtype)
{
}

Vehicle::Vehicle(std::string _id, std::string _brand, VehicleType _Vtype)
: _id(_id), _brand(_brand), _Vtype(_Vtype)
{
}
