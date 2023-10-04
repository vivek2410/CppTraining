#include "/workspaces/CppTraining/Day3/ScenarioD/Vehicle.h"

#include <iostream>

/*
use case 1 : with variables of primitive types which are not pointers
*/
void Demo(){
    //n1 is a 'constant integer'
    const int n1 = 10;
    //grade is a 'constant character'
    const char grade = 'A';

    //allowed
    std::cout<< n1 << "\t" << grade << "\n";

    //NOT ALLOWED
   // n1 = 20; //since n1 is immutable (constant), it cannot be changed once initialized

   //garde = 'B' //since garde is immutable (constant), it cannot be changed once initialized
}

int main(){
    Demo();
}

