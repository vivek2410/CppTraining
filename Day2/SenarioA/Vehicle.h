#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "Type.h"

class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    Type _type;
    float _price;
public:
    Vehicle(std::string id,
            std::string brand,
            Type type,
            float price
    );
    
    Vehicle(
            std::string id,
            std::string brand,
            Type type
    );

    //deefault copy constructer
    //I will not write the body of copy constructer.
    //Compiler should generate a default
    Vehicle(const Vehicle&) = default;
    //  | avoids writing total constructer if we want to
    // write the |
    // Vehicle(const Vehicle& obj){
    //     _id = obj._id;
    //     _brand = obj._brand;
    //     _type = obj._type;
    //     _price = obj._price;
    // }
    ~Vehicle() {
        _id;
    }

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    Type type() const { return _type; }

    float price() const { return _price; }
};


#endif // VEHICLE_H
