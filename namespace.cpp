#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    int mode = 1;
    if (mode == 0){
        int x = 0;
        std::cout << x << std::endl;
        std::cout << first::x << std::endl;
        std::cout << second::x << std::endl;
    }
    else if (mode == 1){
        using namespace first;
        std::cout << x;
    }
    return 0;
}