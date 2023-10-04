#include <iostream>

int main(){

    int i = 7;
    int arr[]= {1,2,3,4,5};
    int* Px = &arr[0];
    int* j = &i;
    *j=87;
    
    std::cout<<i<<"\n";
    std::cout<<arr<<"\n";
    std::cout<<Px<<"\n";
}