#include <iostream>

int main() {
    int n, s, curmax;
    std::cout << "Enter a number: ";
    std::cin >> n;
    curmax = n;
    s = 0;

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = 3*n + 1;
        }
        if (curmax < n) {
            curmax = n;
        }
        std::cout << n << "\t";
        s++;
    }
    std::cout << "\nCurrent max: " << curmax << std::endl;
    std::cout << s << " steps required! " << std::endl;
}