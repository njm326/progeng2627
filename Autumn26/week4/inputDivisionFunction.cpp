#include <iostream>

void integerDivision(int& x, int& y, int& result, int& remainder) {
    result = x/y;
    remainder = x%y;
}

int main() {
    std::cout << "Please enter two numbers" << std::endl;
    int x, y, result, remainder;
    std::cin >> x >> y;
    integerDivision(x, y, result, remainder);
    std::cout << "For " << x << "/" << y << " the result is: " << result << " and the remainder is: " << remainder << std::endl;
}