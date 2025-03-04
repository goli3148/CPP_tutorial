#include <iostream>

int main(){
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                        {"Coverete", "Equinox", "silverado"},
                        {"Challenger", "Durango", "Ram 1500"}};
    int rows = sizeof(cars) / sizeof(cars[0]);
    int coloumns = sizeof(cars[0]) / sizeof(cars[0][0]);
    for (int i=0; i<rows; i++){
        for (int j=0; j<coloumns; j++){
            std::cout << cars[i][j] << "  ";
        }
        std::cout << std::endl;
    }
    return 0;
}