#include <iostream>
#include "Car.h"
#include "Functionalities.h"

int main(){ 
    Car* arr[3];
    CreateCars(arr);

    std::cout<<AverageofPrize(arr);
}