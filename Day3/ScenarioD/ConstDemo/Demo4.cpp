#include <iostream>

void Demo(){
    int n1 = 10;
    int n2 = 20;
    //const is applied on 'int' not on 'int*'

    //ptr is a pointer to a CONSTANT integer
    int * const ptr = &n1;
    
    //since pointer itself is not constant, its 'content' cannot be changed
    //so address inside ptr cannot be changed
    //ptr = &n2; won't work since ptr itself is constant

    //since int part is constant, I cannot use pointer to change n1's value
    *ptr = 100; // allowed
}