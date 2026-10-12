# include <iostream>
//3.1
int main() {
    int value, divider, quotient = 0;
    std::cin >> value >> divider;
    std::cout << "we want to perform the integer division of 10 by 3" << std::endl;
    while(value >= divider) {
    std::cout << value << " is greater than " << divider << " so we subtract " << divider << " from " << value << " (first subtraction) we get " << value-divider << std::endl;
    value = value -divider;
    quotient = quotient + 1;
    }
    std::cout << value << " is not greater than " << divider <<" so we terminate the loop" << std::endl;
    std::cout << "the quotient is the number of subtractions (" << quotient << ")" << std::endl;
    std::cout << "the remainder is the number we have left at the end ("<< value << ")" << std::endl;
}