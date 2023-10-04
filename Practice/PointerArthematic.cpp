#include <iostream>

int main(){

    int arr[] = {1,2,3,4,5};
    int* i = arr;
    //watching the addresses
    std::cout<<arr<<"\n";
    std::cout<<&i<<"\n";

    std::cout<< i <<"\n";
    std::cout<< *i <<"\n";
    i++;
    std::cout<< i <<"\n";
    std::cout<< *i <<"\n";

    int* k = new int;
    delete k;

    std::cout<< *(arr+0) <<"\n";
    std::cout<< *(arr+1) <<"\n";
    std::cout<< *(arr+2) <<"\n";
    std::cout<< *(arr+3) <<"\n";
    std::cout<< *(arr+4) <<"\n";

    std::cout<< arr[0] <<"\n";
    std::cout<< arr[1] <<"\n";
    std::cout<< arr[2] <<"\n";
    std::cout<< arr[3] <<"\n";
    std::cout<< arr[4] <<"\n";

    char arr1[6]="hello";
    std::cout<<(void*)arr1<<"\n";
    std::cout<<(void*)(arr1 + 1)<<"\n";
    std::cout<<(void*)(arr1 + 2)<<"\n";
    std::cout<<(void*)(arr1 + 3)<<"\n";

    std::cout<<arr1<<"\n";
    std::cout<<arr1 + 1<<"\n";
    std::cout<<arr1 + 2<<"\n";
    std::cout<<arr1 + 3<<"\n";
    std::cout<<arr1 + 4<<"\n";

    //std::string

}