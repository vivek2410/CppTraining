#include "Functionalities.h"

void CreateObjects(Vehicle *arr[3])
{
    arr[0] = new Vehicle("v101", "Honda", 8890434.0f, VehicleType::BIKE);
    arr[1] = new Vehicle("v102", "Hyundai", 8890434.0f, VehicleType::CAR);
    arr[2] = new Vehicle("v103", "Renault", 8890434.0f, VehicleType::BIKE);

}

float AveragePrice(Vehicle *arr[3])
{
    float total = 0.0f;

    for(int i=0; i<3; i++){
        total += arr[i]->price();
    }
    return total/3;
}

void MinPriceCarDetails(Vehicle *arr[3])
{
    Vehicle* result = arr[0];
    float min = arr[0]->price();

    for(int i=0; i<3; i++){
        if(arr[i]->price()<min){
            min = arr[i]->price();
            result =arr[i];
        }
    }
    std::cout<< *result <<"\n";
}
