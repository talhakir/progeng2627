#include <iostream>
int main(){
    int i, j, n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    for (i = 1; i <= n; i++) {
        for(j = 1; j <=n; j++) {
            std::cout << j*i << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
}