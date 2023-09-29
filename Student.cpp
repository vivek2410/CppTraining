#include <iostream>
#include "Department.h"
class Student
{
private:
    int _roll_number;
    std::string _name;
    float _fees;
    char _grade;
    Department _dept; //IT, CS, AI_ML
public:
    //default constructor
    Student() = default; //it will set the default values to the 
                         //all the variables available in the class by using constructor
    //constructor
    Student(int rnum, std::string name, float fees, char grade, Department dept) {
        this -> _name = name;
        this -> _fees = fees;
        this -> _roll_number = rnum;
        this -> _grade = grade;
        this -> _dept = dept;
    }
    
    //Destructor
    ~Student(){
        std::cout << "Student with roll number: "
            << this -> _roll_number
            <<"is now destroyed\n";
    }
};

int main(){

    //stack  //stack memory is deleted when we reach the end of the function  //Last in first out
    Student s1(101, "vivek", 87777.0f, 'A', Department::CS);
    Student s3(103, "Riya", 87777.0f, 'A', Department::IT);

    //HEAP
    Student* s2 = new Student(202, "Bhanu", 87669.0f, 'A', Department::AI_ML);
    Student* s4 = new Student(404, "Sri", 87669.0f, 'B', Department::AI_ML);

    delete s2;

    //number 202 is deleted <-- cause we have performed delete operation for s2 first
    //number 103 is deleted <-- 103 is deleted after 202 but not 101 .. 
                                //cause stack follows First in first out rulee
    //number 101 is deleted <--- Lastly 101 is deleted
    
    Student arr[2] = {s1, s3}; //array of stack allocated Student objects
    Student* heapArr[2] = {s2, s4};
}