#include "Car.h"
#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

/*
 This function should create objects on heap and store their pointers
 in the array
*/
void CreateObjects(Car* arr[3]);
/*
Average of all the cars
*/
float AveragePrice(Car* arr[3]);

/*
*/

void CallCalculateTax(Car* arr[3]);

/*

*/

void FreeMemory(Car* arr[3]);

#endif // FUNCTIONALITIES_H
