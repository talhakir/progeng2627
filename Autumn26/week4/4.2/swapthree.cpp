#include <iostream>

void myswap(double& n1, double& n2);
void sort_three_numbers(double& s1, double& s2, double& s3);

int main(){
    double n1, n2, n3;
    
    n1=1.25, n2=1.5, n3=1.4;
    sort_three_numbers(n1, n2, n3);
    std::cout << ((n1==1.25 && n2==1.4 && n3==1.5) == 1) << std::endl;

    n1=1.8, n2=1.2, n3=1.4;
    sort_three_numbers(n1, n2, n3);
    std::cout << ((n1==1.2 && n2==1.4 && n3==1.8) == 1) << std::endl;
    
    n1=1.3, n2=1.1, n3=1.9;
    sort_three_numbers(n1, n2, n3);
    std::cout << ((n1==1.1 && n2==1.3 && n3==1.9) == 1) << std::endl;
}


void sort_three_numbers(double& s1, double& s2, double& s3){
    if (s2 < s1) {
        myswap(s1,s2);
    }
    if (s3 < s1) {
        myswap(s1,s3);
    }
    if (s3 < s2) {
        myswap(s2,s3);
    }
}

void myswap(double& n1, double& n2){
    double tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}