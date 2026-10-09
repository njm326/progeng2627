#include <iostream>
//2.2
int main () {
    int year;
    std::cout << "Please enter the year" << std::endl;
    std::cin >> year;
    if((year%4) == 0) {
        if((year%100) == 0) {
            if((year%400) == 0) {
                std::cout << "Leap year" << std::endl;
            } else {
                std::cout << "Not a leap year" << std::endl;
            }
        }
        else {
            std::cout << "Leap year" << std::endl;
        }
    }
    else {
        std::cout << "Not a leap year" << std::endl;
    }
}