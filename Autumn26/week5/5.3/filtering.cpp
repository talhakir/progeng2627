#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout);

int main()
{
    std::vector<double> vin, vout;
    double t;

    vin = {3, 4, -1};
    t = 3;
    filter_v(vin, t, vout);
    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << " ";
    }
    vout.clear();
    std::cout << std::endl;
    

    vin = {1, 50, -2};
    t = 51;
    filter_v(vin, t, vout);
    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << " ";
    }
    vout.clear();
    std::cout << std::endl;

    vin = {3, 25, 5, -10, 105, 49};
    t = 51;
    filter_v(vin, t, vout);
    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << " ";
    }
    vout.clear();
    std::cout << std::endl;

    return 0;
}

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout) {
    for(int i = 0; i < vin.size(); i++) {
        if (t > vin[i]) {
            vout.push_back(vin[i]);
        }
    }
}