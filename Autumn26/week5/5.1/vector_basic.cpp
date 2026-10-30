#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    v.push_back(5);
    v.push_back(15);
    v.push_back(35);

    std::cout << v[0] * (v[1]+v[2]) << std::endl;
    
    return 0;
}