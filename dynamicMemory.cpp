#include <iostream>

int main(){    
    // Example 1
    int *pNumber = NULL;
    
    pNumber = new int;
    *pNumber = 21;

    delete pNumber;

    // Example 2
    char *grades = NULL;
    int size;

    std::cout << "how many grades you need? ";
    std::cin >> size;

    grades = new char[size];
    for (int i=0; i<size; i++){
        std::cout << "Enter Grade #" << i+1 << ":";
        std::cin >> grades[i];
    }

    for (int i=0; i<size; i++){
        std::cout << "Grade #" << i+1 << " = " << grades[i] << "\n";
    }
    delete[] grades;

    return 0;
}