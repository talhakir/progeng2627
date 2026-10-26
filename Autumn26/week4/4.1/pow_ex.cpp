#include <iostream>

double mypow(double base, int exp);

int main(){

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "0.5^-1: " << mypow(0.5, -1) << std::endl;
    std::cout << "2^-1: " << mypow(2, -1) << std::endl;
    std::cout << "8^-3: " << mypow(8, -3) << std::endl;
    return 0;
}

double mypow(double base, int exp){
    double result = 1; 
    if (exp < 0) {
       for(int i = 0; i > exp; i--) {
        result /= base; 
        } 
    }
    else {
        for(int i = 0; i < exp; i++) {
        result *= base; 
        }
    }
        
    return result;
}