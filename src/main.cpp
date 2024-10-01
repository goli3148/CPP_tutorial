#include <iostream>
#include <string>
#include <array>
using namespace std;

class CVector{
    public:
        int x, y;
        CVector () {};
        CVector (int, int);
        CVector operator + (CVector);
};
CVector::CVector(int a, int b){
    x = a;
    y = b;
}
CVector CVector::operator + (CVector cvector){
    CVector temp;
    temp.x = x + cvector.x;
    temp.y = y + cvector.y;
    return (temp);
}

void print_array(int args [3], int length){
    for (int i=0; i<length; i++){
        cout << args[i] << endl;
    }
}

int main() {
    int ages [] = {1, 3, 5};
    print_array(ages, 3);
    cout << *&ages[0] << endl;

    CVector a (1, 2);
    CVector b (3, 4);
    CVector c;
    c = a + b;

    return 0;
}
