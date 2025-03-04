#include <iostream>

int max(int a, int b){
    return a > b ? a : b;
}
double max(double a, double b){
    return a > b ? a : b;
}
char max(char a, char b){
    return a > b ? a : b;
}

template <typename T>
T max2(T a, T b){
    return a > b ? a : b;
}

template <typename P, typename Q>
auto max3(P a, Q b){
    return a > b ? a : b;
}

int main(){
    // consider create a max function for many types
    std::cout << max(1, 2) << '\n';
    std::cout << max(1.0, 2.3) << '\n';
    std::cout << max('1', '2') << '\n';

    //for a same operation over different data types we use funtion template
    std::cout << max2(1, 2) << '\n';
    std::cout << max2(1.0, 2.3) << '\n';
    std::cout << max2('1', '2') << '\n';

    //using only one function tmeplate will cause problem like below
    // std::cout << max(1, 2.3) << '\n'; this line cause syntax error
    // So we use multiple function template

    std::cout << max3(1, 2.3) << '\n';
}