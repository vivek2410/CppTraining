#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "VehicleType.h"

class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    float _price;
    VehicleType _type;
public:
    Vehicle() = delete; //disabled default constructor
    Vehicle(const Vehicle&) = default; //defaulted copy constructor
    ~Vehicle() {
        std::cout
        <<"Vehicle with ID: "
        <<_id
        <<" is destroyed\n";
    }

    Vehicle(
        std::string _id,
        std::string _brand,
        float _price,
        VehicleType _type
    )
    : _id(_id), _brand(_brand), _price(_price), _type(_type)
    {

    }

    float CalculateTax();
    float CalculateTax(float tax_percent);
    float CalculateTax(float cgst, float sgst);

    std::string id() const { return _id; }

//function ()
    float operator+ (Vehicle e2){
        //current object's price and passed objects's price
        return this->price()+e2.price();
    }
    float operator+ (Vehicle* e2){
        //current object's price and passed objects's price
        return this->price()+ e2->price();
    }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }

    //friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);

    friend std::ostream& operator<<(std::ostream& os, const Vehicle & obj){
        os << "Id: "<< obj._id <<"\t" <<"Brand: " <<obj._brand
        << "\t" << "Price: " << obj._price <<"\t" <<"Type: "
        <<DisplayEnum(obj._type);

        return os;
    }
   
};
std::string DisplayEnum(const VehicleType val);


#endif // VEHICLE_H
