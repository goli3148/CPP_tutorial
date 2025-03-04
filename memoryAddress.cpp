#include <iostream>

int main(){
    std::string student = "ali";
    int age = 20;
    bool student_exists = true;

    std::cout << &student << std::endl;
    std::cout << &age << std::endl;
    std::cout << &student_exists << std::endl;

    return 0;
}