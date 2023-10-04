#include <iostream>
#include "Vehicle.h"
#include "Functionalities.h"

int main(){
    Vehicle* arr[3];

    CreateObjects(arr);

    std::cout<<"Total Out PuT of Float is " << AverageofPrize(arr)<<"\n";

    std::cout<<DisplayEnum(type::MARUTHI);
}