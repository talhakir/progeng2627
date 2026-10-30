#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    int n, s, temp, count = 0;
    std::cout << "Please enter n: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        std::cout << "Enter the number: ";
        std::cin >> temp;
        v.push_back(temp);
    }
    std::cout << "Please enter s: ";
    std::cin >> s;

    for(int i = 0; i < v.size(); i++){
        if (v[i] == s)
        {
            count++;
        }        
    }

    if (count) {
        std::cout << "There are " << count << " occurrences of " << s;
    }
    else {
        std::cout << "There are no occurrence(s) of " << s;
    }


    return 0;
}