#include <iostream>
#include <math.h>

int main() {
    int n, x, sum = 0;
    std::cout << "Enter n and x respectively, " << std::endl;
    std::cin >> n >> x;
    for(int i = 1; i <= n; i++) {
        sum += std::pow(x, i);
    }
    std::cout << "Your result is: " << sum << std::endl;

    return 0;
}