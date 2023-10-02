// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    int n1 = 10;
    int * ptr = &n1;
    int **Sptr = &ptr;
    std::cout << "Data inside n1: " <<n1<<"\n";
    std::cout <<"Data inside Sptr: " <<Sptr<<"\n";
    std::cout <<"Jump ptr one time: " << *ptr <<"\n";
    std::cout <<"Jump Sptr to 2 times ** " <<**Sptr <<"\n"; 
    std::cout << "Address of n1: " << &n1;
    std::cout << "Address of ptr: "<< &ptr; 
    std::cout << "Address of sptr: " << &Sptr;
    return 0;
}