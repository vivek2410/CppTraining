#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "CarType.h"
#include <ostream>

class Car : public Vehicle{
private:
    CarType _car_type;
public:
    //4 +1
    Car(std::string id, std::string brand, float price, VehicleType type, CarType ctype);
    //3 +1
    Car(std::string id, std::string brand, VehicleType type, CarType ctype);

    ~Car(){
        std::cout<<"Car part of vehicle with Id: "
        <<id()
        <<"is destroyed\n";
    }

    CarType carType() const { 
        return _car_type;
    }

    float CalculateTax() override;

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
    
    

};
std::string DisplayEnum(const CarType val);

#endif // CAR_H
