#include <iostream>
//1.4
int main() {
    double amount, conversionrate;
    std::cout << "Please enter the amount of pounds you are converting" << std::endl;
    std::cin >> amount;
    std::cout << "Please enter the conversion rate (how many euros for 1 pound)" << std::endl;
    std::cin >> conversionrate;
    std::cout << amount << " pounds is " << amount*conversionrate << " euros" << std::endl;
}