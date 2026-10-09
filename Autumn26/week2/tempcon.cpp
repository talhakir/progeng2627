#include <iostream>
#include <string>

int main(){

    double temp_in, temp_out;
    std::string unit_in, unit_out;
    bool isValid = 1;

    const double celc_to_fah = 9/5 + 32;

    std::cin >> temp_in >> unit_in;
    

    if(unit_in == "C" || unit_in == "c"){
        unit_out = "F";
        temp_out = temp_in * 9/5 + 32;
    }
    else if (unit_in == "F" || unit_in == "f"){
        unit_out = "C";
        temp_out = (temp_in - 32) * (5/9);
    }
    else {
        isValid = 0;
    }
    
    if (isValid) {
        std::cout << temp_out << " " << unit_out << std::endl;
    }
    else {
        std::cout << "Error, unit not recognised" << std::endl;
    }

    return 0;
}