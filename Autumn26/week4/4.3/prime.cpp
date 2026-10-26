#include <iostream>

int smallest_factor(int n);

int main() {

    std::cout << (smallest_factor(5)==0) << std::endl;
    std::cout << (smallest_factor(20)==2) << std::endl;
    std::cout << (smallest_factor(49)==7) << std::endl;
    std::cout << (smallest_factor(13)==0) << std::endl;

}

int smallest_factor(int n) {
    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0){ 
            return cf;
        }           
    }
    return 0;
}