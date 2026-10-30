#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin);

int main() 
{
    std::vector<int> v{3, 4, -1};
    std::cout << (search_vector(3, v)==0) << std::endl;

    v = {2, -1, 7, -2};
    std::cout << (search_vector(-1, v)==1)  << std::endl;

    v = {};
    std::cout << (search_vector(3, v)==-1)  << std::endl;

    v = {2, 16, 7, 23};
    std::cout << (search_vector(3, v)==-1)  << std::endl;

    v = {2, 16, 7, 7};
    std::cout << (search_vector(7, v)==2)  << std::endl;

    return 0;
}

int search_vector(int n, const std::vector<int>& vin) {
    for (int i = 0; i < vin.size(); i++) {
        if (n == vin[i]) {
            return i;
        }
    }
    return -1;
}