#include <iostream>
#include <vector>
#include <list>
class Student1
{
private:
    int id;
    std::string studentname;
public:
    Student1(int id, std::string studentname) {
        this -> id = id;
        this -> studentname = studentname;
    }
    void detailsofstudent(){
        std::cout<< "id of student is "<< id <<"student name is "<< studentname <<"\n";
    }
    ~Student1() {}
};

class Engineer : public Student1
{
private:
    std::string _course_name;
public:
    Engineer(int id, std::string name, std::string cname) 
    : Student1(id, name){
        this -> _course_name = cname; //my part is done
    }
    // void detailsofengineer(){
    //     std::cout<< "id of engineer "<< Student1->id 
    // }
    ~Engineer() {}
};

int main()
{
    Engineer* e1 = new Engineer(101, "vivek", "BTECH: CS");
    Student1* c1 = new Student1(102, "bhanu");

    Student1* arr[2]={e1,c1};   //upcasting (storing child details in parent) e1 is a studnet , c1 is a student

    std::list<Student1*> data1={e1, c1};
    std::vector<Student1*> data2={e1, c1};

    c1->detailsofstudent();
}