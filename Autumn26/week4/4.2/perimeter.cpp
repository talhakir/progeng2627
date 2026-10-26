#include <iostream>
#include <math.h>

void per_are(double a, double b, double& per, double &area);

int main() {
    double per, area;

    per_are(2, 2.4, per, area);
    std::cout << ((per==8.8 && area==4.8)==1) << std::endl;

    per_are(1, 2.4, per, area);
    std::cout << ((per==6.8 && area==2.4)==1) << std::endl;

    per_are(0.5, 0.5, per, area);
    std::cout << ((per==2 && area==0.25)==1) << std::endl;

    return 0;
}

void per_are(double a, double b, double& per, double &area){
    area = a*b;
    per = 2*(a+b);
}