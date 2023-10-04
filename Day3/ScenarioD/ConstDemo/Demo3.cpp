#include <iostream>

void Demo(){
    int n1 = 10;
    int n2 = 20;
    //const is applied on 'int' not on 'int*'

    //ptr is a pointer to a CONSTANT integer
    int const * ptr = &n1;
    
    //since pointer itself is not constant, its 'content' can be changed
    //address can be changed
    ptr = &n2;

    //since int part is contant, I cannot use pointer to change n1's value
    //*ptr = 100; //not allowed
}