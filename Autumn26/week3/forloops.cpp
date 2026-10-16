#include <iostream>

int main() {
    //These lines are for x^n
    int x, l = 1, n;
    std::cout << "Enter a number x, and a number n, to see x^n (in seperate lines)" << std::endl;
    std::cin >> x;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        l *= x;
    }
    std::cout << "The number is: " << l << std::endl;

    //The rest for factorial
    int f, m = 1;
    std::cout << "Enter a number: ";
    std::cin >> f;
    for (int i = 1; i <= f; i++) {
        m *= i;
    } 
    std::cout << "The factorial is: " << m << std::endl;

    return 0;
}