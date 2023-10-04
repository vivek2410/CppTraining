#include "Vehicle.h"
#include "VehicleType.h"

void Demo(){
    Vehicle v1("v101", "Maruthi", 89000.0f, VehicleType::CAR);
    Vehicle v2("v102", "Maruthi", 189000.0f, VehicleType::CAR);

    Vehicle* v3 = new  Vehicle("v101", "Maruthi", 89000.0f, VehicleType::CAR);
    Vehicle* v4 = new  Vehicle("v102", "Maruthi", 89000.0f, VehicleType::CAR);

    float ans = v1 + v2;

    std::cout<<"out put is"<< ans <<"\n";
    std::cout<< (*v3) + (*v4) <<"\n";
}

int main(){
    Demo();
}