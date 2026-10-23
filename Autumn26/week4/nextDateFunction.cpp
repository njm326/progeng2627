#include <iostream>

bool leap_year(int year){
    bool leap_year;
    if((year%4) == 0) {
        if((year%100) == 0) {
            if((year%400) == 0) {
                leap_year = true;
            } else {
                leap_year = false;
            }
        }
        else {
            leap_year = true;
        }
    }
    else {
        leap_year = false;
    }

    return leap_year;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){

    
    //Deals with leap year
    if(leap_year(y1)) {
        if(m1 == 2 && d1 == 28) {
             d2 = d1+1;
        }
        m2 = m1;
        y2 = y1;
    } else {
        //Moves to next month/day
        int monthdaylimit = 0;
        if(m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12) {
            monthdaylimit = 31;
        } else if (m1 = 2){
            monthdaylimit = 28;
        } else {
            monthdaylimit = 30;
        }
        if(d1 == monthdaylimit) {
            m2 = (m1 + 1)%12;
            d2 = 1;
        } else {
            d2 = d1+1;
        }
        

        //Moves to next year on december 31st
        if(m1 == 12 && d1 == 31) {
            y2 = y1 +1;
        } else {
            y2 = y1;
        }
    }

}

int main(){
    int d1, m1, y1, d2, m2, y2;
    std::cout << "Please enter your current date" << std::endl;
    std::cin >> d1 >> m1 >> y1;
    next_date(d1,m1,y1,d2,m2,y2);
    std::cout << "The next date is day: " << d2 << ", month: " << m2 << ", year: " << y2 << std::endl;

    // TODO: write a main to test the function
}