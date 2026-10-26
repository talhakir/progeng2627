#include <iostream>

int smallest_factor(int n);

int main() {
    int min, max;
    std::cout << "Enter min and max of a range: " << std::endl;
    std::cin >> min >> max;

    for (int i=min; i<=max; i++) {
        if(smallest_factor(i)==0)
        {
            std::cout << i << std::endl;
        }
    }
}


int smallest_factor(int n) {
    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0){ 
            return cf;
        }           
    }
    return 0;
}