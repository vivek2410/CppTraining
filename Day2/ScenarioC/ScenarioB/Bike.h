#ifndef BIKE_H
#define BIKE_H
//if we using upcasting in cpp then try to change parent class destructor to virtual
#include "BikeType.h"
#include "Vehicle.h"
#include <ostream>

class Bike : public Vehicle
{
private:
    float _bike_mileage;
    BikeType _bike_type;
public:
    // 3+2
    Bike(std::string id, std::string brand, VehicleType type, float mileage, BikeType btype);

    //4+2
    Bike(std::string id, std::string brand, float price, VehicleType type, float mileage, BikeType btype);

    float CalculateTax();
    
    ~Bike() {}

    friend std::ostream &operator<<(std::ostream &os, const Bike &rhs);
     
    
    
    
};
std::string DisplayEnum(const BikeType val);


#endif // BIKE_H
