#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include "Employee.h"


class Manager : public Employee
{
private:
    /* data */
public:
    Manager()= default;

    void applyForLeaves(){
        std::cout<<"10 leaves ";
    }

    void payTax(){
        std::cout<< "Employee pays 15% of salary as";
    }

    void Display(){
        std::cout<<"Employee Display called vivek\n";
    }


    ~Manager() {
        std::cout<<"Manager Destroyed\n";
    }
};

#endif // MANAGER_H
