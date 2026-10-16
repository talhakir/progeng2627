#include <iostream>

int main() {
    int lb, ub, n = 1, guess;
    std::cout << "I will guess the number... \nEnter lower boundary and upper boundary, respectively" << std::endl;
    std::cin >> lb;
    std::cin >> ub;

    while (n != 0) {
        guess = (lb+ub) / 2;
        std::cout << guess << " might be your number. If not, enter 1 if it's higher, enter 2 if it's lower. Press 0 if it's true: ";
        std::cin >> n;
        if (n == 1) {
            lb = guess + 1;
        }
        else if (n==2) {
            ub = guess - 1;
        }
    }
    return 0;
}