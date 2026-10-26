#include <iostream>

double max(double a, double b, double c) {
    if (a < b) {
        if (b > c)
            return b;
        else {
            return c;
        }
    }
    else {
        if (a > c) {
            return a;
        }
        else {
            return c;
        }
    }
}

int main() 
{
    double a, b;
    std::cout << "The maximum is: " << (max(10,20,30) == 30) << std::endl;
    std::cout << "The maximum is: " << (max(25,15,10) == 25) << std::endl;
    std::cout << "The maximum is: " << (max(10.4,10.45,-5) == 10.45) << std::endl;
    std::cout << "The maximum is: " << (max(-2,-10,-1) == -1) << std::endl;
    std::cout << "The maximum is: " << (max(5,5,5) == 5) << std::endl;
    
    return 0;
}