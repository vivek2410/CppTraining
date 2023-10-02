#include <iostream>

class student
{
private:
    int studentid;
    std::string studentname;
    float fee;
public:
    student() = default;
    student(int _studentid, std::string _studentname, float _fee) 
    : studentid(_studentid), studentname(_studentname), fee(_fee){}
    
    void printdetails(){
        std::cout<< "student id is .. "<< studentid << ", " 
        << "student name is .. " << studentname << "student fee is.. " <<fee << "\n";
    }
    ~student() {}
};

int main()
{
    student s1;
    student s2(67, "vivek", 5600.89);
    s1.printdetails();
    s2.printdetails();
}