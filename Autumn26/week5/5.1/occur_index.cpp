#include <iostream>
#include <vector>

int main() {
    std::vector<int> v, c;
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
            c.push_back(i);
        }        
    }

    if (count) {
        std::cout << "There are " << count << " occurrences of " << s << " at indices: " << std::endl;
        for(int i = 0; i < c.size(); i++)
        {
            std::cout << c[i] << std::endl;
        }
    }
    else {
        std::cout << "There are no occurrence(s) of " << s;
    }

    return 0;
}