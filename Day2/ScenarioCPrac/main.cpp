#include <iostream>
#include "Vehicle.h"
#include "Functionalities.h"

int main()
{
    Vehicle* arr[3];

    CreateCars(arr);

    std::cout<<"Average of prize of Vehicle is" << AverageofPrize(arr)<<"\n";

    CallCalculateTax(arr);

    FreeSpace(arr);
}