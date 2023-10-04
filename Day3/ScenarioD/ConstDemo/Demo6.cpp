#include <iostream>

class Demo6
{
private:
    /* data */
public:
    Demo6()= default;

    void magic(){
        std::cout<<"Something";
    }
    void display() const {
        std::cout<<"this works\n";
    }
    ~Demo6() {}
};

int main(){
    const Demo6 e1; //object on stack
    e1.display();
    //e1.magic(); //cannot call non-const member funtion on a const object
}