#include "Functionalities.h"
#include "Car.h"

void CreateCars(Car *container[3])
{
     container[0] = new Car("v101", "vivek", 677.0f, VehicleType::BIKE, CarType::MARUTI);
     container[1] = new Car("v102", " bhanu", 657.0f, VehicleType::CAR, CarType::SUZUKI);
     container[2] = new Car("v103", "sai", 687.0f, VehicleType::OTHER, CarType::SWIFT);
}

float AverageofPrize(Car *container[3])
{
    float total = 0.0f;
    
    for(int i=0; i<3; i++)
    {
        total += (container[i])->prize();
    }
    return total/3;
}

void CallCalculateTax(Car *container[3])
{
    for(int i=0; i<3; i++){
        std::cout<< "Tax for "<<container[i]->name()<<" is "<< container[i]->CalculateTax()<<"\n";
    }
}
