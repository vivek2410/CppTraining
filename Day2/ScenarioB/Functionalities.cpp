#include "Functionalities.h"
#include "CarType.h"
#include "VehicleType.h"
//#include "Car.h"

void CreateObjects(Car *arr[3])
{
    arr[0] = new Car("v101", "Honda", 78000.0f, VehicleType::CAR, CarType::SUV);
    arr[1] = new Car("v101", "Honda", 78000.0f, VehicleType::CAR, CarType::SUV);
    arr[2] = new Car("v101", "Honda", 78000.0f, VehicleType::CAR, CarType::SUV);
}

float AveragePrice(Car *arr[3])
{
    float total = 0.0f;
    for(int i=0; i<3; i++){
        total += (arr[i]->price());
    }
    return total/3;
}

void CallCalculateTax(Car *arr[3])
{
    for(int i=0; i<3; i++){
        std::cout<<(arr[i])-> CalculateTax() <<"\n";
    }
}

void FreeMemory(Car *arr[3])
{
    for(int i=0; i<3; i++){
        std::cout<<"deleting" << arr[i];
        delete arr[i];
        std::cout<<"\n";
    }
}
