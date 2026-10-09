#include <iostream>

int main() {
    int a, b, q, r;
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "divided by: ";
    std::cin >> b;
    
    while (a > b)
    {
        a = a-b;
        q++;
    }
    
    // We can decide to not use r, but for the sake of keeping variables constans, we use r
    r = a;
    a = r + (b*q);

    std::cout << "the quotient is the number of subtractions " << q << std::endl;
    std::cout << "the remainder is the number we have left at the end " << r << std::endl;
    std::cout << "original number: " << a << std::endl;
    
    return 0;
}