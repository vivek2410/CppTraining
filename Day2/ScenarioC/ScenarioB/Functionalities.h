#include "Car.h"
#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

/*
 This function should create objects on heap and store their pointers
 in the array
*/
void CreateObjects(Vehicle* garage[3]);
/*
Average of all the cars
*/
float AveragePrice(Vehicle* garage[3]);

/*
*/

void CallCalculateTax(Vehicle* garage[3]);

/*

*/

void FreeMemory(Vehicle* garage[3]);

#endif // FUNCTIONALITIES_H
