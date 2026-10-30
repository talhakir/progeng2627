#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout);

int main() 
{
    std::vector<int> vin1, vin2, vout;

    int n, temp;
    std::cout << "Please enter n: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        std::cout << "Enter the number: ";
        std::cin >> temp;
        vin1.push_back(temp);
    }
    
    std::cout << "Please enter m: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        std::cout << "Enter the number: ";
        std::cin >> temp;
        vin2.push_back(temp);
    }

    append_vectors(vin1, vin2, vout);

    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << " ";
    }

    return 0;
}


void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout) {
    for(int i = 0; i < vin1.size(); i++) {
        vout.push_back(vin1[i]);
    }
    for(int i = 0; i < vin2.size(); i++) {
        vout.push_back(vin2[i]);
    }
}