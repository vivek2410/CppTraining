#include "Vehicle.h"
#include <iostream>
#include "Type.h"

#include "Functionalities.h"

/*

*/

int main(){
    Vehicle* arr[3];
    
    CreateObjects(arr);
    std::cout<<"The total average is" <<AveragePrice(arr);

}