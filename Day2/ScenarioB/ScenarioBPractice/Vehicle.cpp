#include "Vehicle.h"

Vehicle::Vehicle(std::string _id, std::string _name, float Prize, VehicleType Vtype)
: _id(_id), _name(_name), Prize(Prize), Vtype(Vtype)
{
}

Vehicle::Vehicle(std::string _id, std::string _name, VehicleType Vtype)
: _id(_id), _name(_name), Vtype(Vtype)
{
}
