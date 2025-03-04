#include <iostream>

int main(){
    std::string student = "ali";
    std::string *pStrudent = &student;

    std::cout << student << " " << pStrudent << " " << *pStrudent;

    int ages[4] = {1, 2, 5, 8};
    int *age = ages ;

    for (int i=0; i<4; i++){
        std::cout << "|" << *(age + i) ;
    }
    return 0;
}