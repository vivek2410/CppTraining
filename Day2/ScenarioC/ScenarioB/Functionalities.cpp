#include "Functionalities.h"
#include "CarType.h"
#include "VehicleType.h"
#include "BikeType.h"
#include "Bike.h"
#include "Car.h"

//#include "Car.h"

void CreateObjects(Vehicle *garage[3])
{
    garage[0] = new Car("v101", "Honda", 78000.0f, VehicleType::CAR, CarType::SUV);
    garage[1] = new Bike("v101", "Honda",8.0f, VehicleType::BIKE, 6700.0f, BikeType::SPORTS);
    garage[2] = new Car("v101", "Honda", 78000.0f, VehicleType::CAR, CarType::HATCHBACK);

    for(int i=0; i<3; i++){
        std::cout<< *(garage[i]) <<"\n";
    }
}

float AveragePrice(Vehicle *garage[3])
{
    float total = 0.0f;
    for(int i=0; i<3; i++){
        total += (garage[i]->price());
    }
    return total/3;
}

void CallCalculateTax(Vehicle *garage[3])
{
    for(int i=0; i<3; i++){
        std::cout<<(garage[i])-> CalculateTax() <<"\n";
    }
}

void FreeMemory(Vehicle *garage[3])
{
    for(int i=0; i<3; i++){
        std::cout<<"deleting" << garage[i];
        delete garage[i];
        std::cout<<"\n";
    }
}
