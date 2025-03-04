#include <iostream>

int main(){
    std::string students[] = {"ali", "amir"};
    for (std::string student : students){
        std::cout << student << '\n';
    }
    return 0;
}