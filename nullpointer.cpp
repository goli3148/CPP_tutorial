#include <iostream>

int main(){

    int *pAge = nullptr;
    int age = 5;

    pAge = &age;

    if (pAge == nullptr){
        std::cout << "pointer to null " << *pAge;
    }else{
        std::cout << "pointer is assigned " << *pAge;
    }

    return 0;
}