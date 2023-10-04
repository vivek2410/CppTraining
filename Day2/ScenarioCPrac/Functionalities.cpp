#include "Functionalities.h"
#include "Vehicle.h"
#include "VehicleType.h"
#include "Car.h"
#include "Bike.h"

void CreateCars(Vehicle *container[3])
{
    container[0] = new Car("v101", "SHano", 567.7f, VehicleType::CAR, CarType::NANO);
    container[1] = new Car("v102", "swedan", 654.6f, VehicleType::CAR, CarType::MARUTHI);
    container[2] = new Bike("v103", "shine", 453.5f, VehicleType::BIKE, BikeType::HONDA, 456.5f);

    for(int i=0; i<3; i++)
    {
        std::cout<<"Object At "
        <<i
        <<" is "
        << *container<<"\n";
    }
}

float AverageofPrize(Vehicle *container[3])
{
    float total = 0.0f;
    for(int i=0; i<3; i++)
    {
        total += container[i] ->getPrize();
    }
    return total/3;
}

void CallCalculateTax(Vehicle *container[3])
{
    for(int i=0; i<3; i++){
        std::cout<<"Vehicle with brand of "<<container[i]->brand()
        <<" is having tax of "<<container[i]->CalculateTax()<<"\n";
    }
}

void FreeSpace(Vehicle *container[3])
{
    for(int i=0; i<3; i++){
        std::cout<<"Object with "<<container[i]->id()<<" is ";
        delete container[i];
        std::cout<<"Deleted "<<"\n";
    }
}
