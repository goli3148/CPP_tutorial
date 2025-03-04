#include <iostream>
double get_total(double prices[], int size);

int main(){
    double prices[] = {49.99, 15.05, 75, 99.9};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = get_total(prices, size);
    std::cout<<total;
    return 0;
}

double get_total(double prices[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }
    return total;
}