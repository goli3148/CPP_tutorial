#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_type;
// or
using pairlist_type = std::vector<std::pair<std::string, int>>;

int main(){

    pairlist_type pairlist;
    return 0;
}