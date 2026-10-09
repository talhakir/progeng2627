#include <iostream>
#include <string>

int main() {
    double bmi, height, weight;
    
    std::cout << "Please, enter your height (in m): ";
    std::cin >> height;
    std::cout << "Please enter your weight (in kg): ";
    std::cin >> weight;
    
    bmi = weight / (height*height);
    
    std::cout << "Your BMI is: " << bmi;

    return 0;
}