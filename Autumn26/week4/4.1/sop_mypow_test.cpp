#include <iostream>

double mypow(double base, int exp);
double sop(double x, double n);

int main() {
    
    std::cout << (sop(2,4)==30) << std::endl;
    std::cout << (sop(4,2)==20) << std::endl;
    std::cout << (sop(2,3)==14) << std::endl;
    std::cout << (sop(1,4)==4) << std::endl;
    std::cout << (sop(5,2)==30) << std::endl;
    return 0;
}

double mypow(double base, int exp){
    double result = 1;
    for(int i = 0; i < exp; i++) {
        result *= base; 
    }
       
    return result;
}

double sop(double x, double n) {
    double sum;
    for(int i = 1; i <= n; i++) {
        sum += mypow(x, i);
    }
    return sum;
}