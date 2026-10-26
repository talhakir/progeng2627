#include <iostream>

double mypow(double base, int exp);

int main() {
    int n, x, sum = 0;
    std::cout << "Enter n and x respectively, " << std::endl;
    std::cin >> n >> x;
    for(int i = 1; i <= n; i++) {
        sum += mypow(x, i);
    }
    std::cout << "Your result is: " << sum << std::endl;

    return 0;
}

double mypow(double base, int exp){
    double result = 1;
    for(int i = 0; i < exp; i++) {
        result *= base; 
    }
       
    return result;
}