#include <iostream>

void int_div(int a, int b, int&rem, int&quo);

int main() {
    int rem, quo;

    int_div(5, 2, rem, quo);
    std::cout << ((quo==2 && rem==1)==1) << std::endl;

    int_div(10, 2, rem, quo);
    std::cout << ((quo==5 && rem==0)==1) << std::endl;

    int_div(7, 5, rem, quo);
    std::cout << ((quo==1 && rem==2)==1) << std::endl;

    int_div(2, 5, rem, quo);
    std::cout << ((quo==0 && rem==2)==1) << std::endl;

    return 0;
}

void int_div(int a, int b, int&rem, int&quo) {
    quo = a/b;
    rem = a%b;
}