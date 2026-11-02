#include <iostream>
#include <vector>
#include <cmath>

int digits_to_decimal(std::vector<int> digits, int base){
    int total =  0;
    for (int i = 0; i < digits.size(); i++) 
    {
        total += digits[i] * (pow(base,(digits.size() - i - 1)));
    }
    return total;
} 

int main() {
    std::vector<int> digits;

    digits = {1,0,1};
    std::cout << (digits_to_decimal(digits, 2) == 5) << std::endl;
    digits = {1,2,2};
    std::cout << (digits_to_decimal(digits, 3) == (2+6+9)) << std::endl;
    digits = {1,5,7};
    std::cout << (digits_to_decimal(digits, 9) == (7+5*9+1*81)) << std::endl;
}