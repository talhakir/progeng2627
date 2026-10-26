#include <iostream>
#include <list>

bool leap_year(int year);
void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2);



int main(){
    int d2, m2, y2;
    
    next_date(15, 5, 2023, d2, m2, y2);
    std::cout << (d2 == 16 && m2 == 5 && y2 == 2023) << std::endl;

    next_date(28, 2, 2024, d2, m2, y2);
    std::cout << (d2 == 29 && m2 == 2 && y2 == 2024) << std::endl;

    next_date(31, 12, 2025, d2, m2, y2);
    std::cout << (d2 == 1 && m2 == 1 && y2 == 2026) << std::endl;

    return 0;
}


bool leap_year(int year){
    bool ly;

   if((year % 4) == 0){ 
        if((year % 100) == 0){ 
            if((year % 400) == 0) {
                ly=true;
            } 
            else {
                ly=false;
            }
        }
        else{ 
            ly=true;
        }
    }
    else{
        ly=false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    if (leap_year(y1)==1) {
        days[1] = 29;
    }
    
    if(d1==days[m1-1]) {
        if(m1==12){
            d2 = 1;
            m2 = 1;
            y2 = y1+1;
        }
        else {
            d2 = 1;
            m2 = m1+1;
            y2 = y1;
        }
    }
    else {
        d2 = d1 + 1;
        m2 = m1;
        y2 = y1;
    }
}