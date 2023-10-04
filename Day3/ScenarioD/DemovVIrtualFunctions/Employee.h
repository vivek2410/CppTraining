#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

class Employee
{
private:
    /* data */
public:
    Employee()=default;

    void applyForLeaves(){
        std::cout<<"Employee applies for leave on";
    }

    virtual void payTax(){
        std::cout<< "Employee pays 20% of salary as";
    }
    virtual void Display(){
        std::cout<<"Employee Display called\n";
    }

    //if we are using upcasting then base class destructor to be declared as virtual
    virtual ~Employee() {
        std::cout<<"Employee Destroyed\n";
    }
};

#endif // EMPLOYEE_H
