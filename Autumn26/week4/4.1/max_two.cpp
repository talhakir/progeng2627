#include <iostream>

double max(double a, double b) {
    if (a < b) {
        return b;
    }
    else {
        return a;
    }
}

int main() 
{
    double a, b;
    std::cout << "The maximum is: " << (max(10,20) == 20) << std::endl;
    std::cout << "The maximum is: " << (max(25,15) == 25) << std::endl;
    std::cout << "The maximum is: " << (max(10.4,10.45) == 10.45) << std::endl;
    std::cout << "The maximum is: " << (max(-2,-10) == -2) << std::endl;
    std::cout << "The maximum is: " << (max(5,5) == 5) << std::endl;
    
    return 0;
}