#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    int n, t, temp;
    std::cout << "Please enter n: " << std::endl;
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        std::cout << "Enter the number: ";
        std::cin >> temp;
        v.push_back(temp);
    }
    std::cout << "Please enter t: " << std::endl;
    std::cin >> t;

    for(int i = 0; i < v.size(); i++){
        if (v[i] < t)
        {
            std::cout << v[i] << " ";
        }        
    }

    return 0;
}