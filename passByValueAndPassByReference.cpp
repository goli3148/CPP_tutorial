#include <iostream>
void swap_value(std::string A, std::string B);
void swap_reference(std::string &A, std::string &B);
int main(){
    std::string A = "first";
    std::string B = "second";

    swap_value(A, B);
    std::cout << "pass by value: " << A << " " << B << std::endl;
    swap_reference(A, B);
    std::cout << "pass by reference: " << A << " " << B << std::endl;
    return 0;
}
void swap_value(std::string A, std::string B){
    std::string temp;
    temp = A;
    A = B;
    B = temp;
}
void swap_reference(std::string &A, std::string &B){
    std::string temp;
    temp = A;
    A = B;
    B = temp;
}