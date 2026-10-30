#include <iostream>
#include <vector>

double min_vector_element(const std::vector<double>& vin);

int main() 
{
    std::vector<double> v{3, 0.5, -1};
    std::cout << (min_vector_element(v)==-1) << std::endl;

    v = {2, -1.1, 7, -1.5};
    std::cout << (min_vector_element(v)==-1.5) << std::endl;

    v = {};
    std::cout << (min_vector_element(v)==-1) << std::endl;

    v = {2.1, 16, 7, 23};
    std::cout << (min_vector_element(v)==2.1) << std::endl;

    return 0;
}

double min_vector_element(const std::vector<double>& vin) {
    double min;
    if (vin.size())
    {
        min = vin[0];
        for (int i = 1; i < vin.size(); i++){
            if (min > vin[i]) {
                min = vin[i];
            } 
        }
        return min;
    }
    else {
        return -1;
    }
}