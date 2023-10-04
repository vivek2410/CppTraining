#include <iostream>
#include "Manager.h"
#include "Employee.h"

int main(){
    Employee* arr[2];

    arr[0] = new Employee();
    arr[1] = new Manager();

    //Employee version of function called bacause applyforleaves is non-virtual
    arr[0]->applyForLeaves();
    arr[1]->applyForLeaves();

    //version specific type to be called because the the function (paytax) is named virtual
    arr[0]->payTax();
    arr[1]->payTax();

    //Employee version of function called because there is no Display in child class Manager
    arr[0]->Display();
    arr[1]->Display();

    delete arr[0];
    delete arr[1];
}