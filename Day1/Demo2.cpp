#include <iostream>

int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    
    int arr[5] = {1,2,3,4,5};
    
    std::cout 
        <<"content of arr: (address of first location)"
        << arr
        <<"\n";
    std::cout
        <<"address of frist location: "
        <<(arr+0) //0x100H + 0*4 = 0x100H
        <<"\n";

    return 0;
}
