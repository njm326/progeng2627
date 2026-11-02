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

bool baseConverter(int inValue, std::vector<int>& outValue, int base){
    if(base > 16 || base < 2) {
        return false;
    }
    bool converted = false;
    std::vector <int> backwardsOutValue;
    while(!converted) {
        if(inValue%(base) != 0) {
            backwardsOutValue.push_back(inValue%(base));
        } else if(inValue/base > 0){
            backwardsOutValue.push_back(0);
        } else {
            converted = true;
        }
        inValue = inValue/base;
    }
    for (int i = backwardsOutValue.size() - 1; i >= 0; i--)
    {
        outValue.push_back(backwardsOutValue[i]);
    }
    return true;
} 
std::string print_digits_as_number (std::vector<int> digits) {
    std::string output;

    for (int i = 0; i < digits.size(); i++)
    {
        if(digits[i] < 10) {
            output += std::to_string(digits[i]);
        } else if(digits[i] == 10) {
            output += "A";
        }else if(digits[i] == 11) {
            output += "B";
        }else if(digits[i] == 12) {
            output += "C";
        }else if(digits[i] == 13) {
            output += "D";
        }else if(digits[i] == 14) {
            output += "E";
        }else if(digits[i] == 15) {
            output += "F";
        }
    }
    
    return output;
}
bool basetobaseConverter(std::vector<int>& digitsIn,int baseIn, std::vector<int>& digitsOut, int baseOut) {
    if(baseIn > 16 || baseIn < 2 || baseOut > 16 || baseIn < 2) {
        return false;
    }
    int output = digits_to_decimal(digitsIn, baseIn);
    baseConverter(output, digitsOut, baseOut);
    return true;
}
int main() {
    int num = 250;
    std::vector<int> octal_digits;
    std::vector<int> hex_digits;


    /// Obtain the octal digits of 250
    baseConverter(num, octal_digits, 8);

    std::cout << "Octal: ";
    std::cout << print_digits_as_number(octal_digits) << std::endl;

    /// Convert the octal digits to hexadecimal digits
    if (basetobaseConverter(octal_digits, 8, hex_digits, 16)) {
        std::cout << "Hexadecimal: ";
        std::cout << print_digits_as_number(hex_digits) << std::endl;
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    num = 120;
    std::vector<int> digitsIn;
    std::vector<int> digitsOut;
    baseConverter(num, digitsIn, 8);
    basetobaseConverter(digitsIn, 8, digitsOut, 8);
    std::cout << (print_digits_as_number(digitsOut) == "170") << std::endl;


    num = 120;
    digitsIn.clear();
    digitsOut.clear();
    baseConverter(num, digitsIn, 10);
    basetobaseConverter(digitsIn, 10, digitsOut, 5);
    std::cout << (print_digits_as_number(digitsOut) == "440") << std::endl; 

    num = 17;
    digitsIn.clear();
    digitsOut.clear();
    baseConverter(num, digitsIn, 2);
    basetobaseConverter(digitsIn, 2, digitsOut, 4);
    std::cout << (print_digits_as_number(digitsOut) == "101") << std::endl; 
    num = 120;
    digitsIn.clear();
    digitsOut.clear();
    baseConverter(num, digitsIn, 2);
    basetobaseConverter(digitsIn, 2, digitsOut, 9);
    std::cout << (print_digits_as_number(digitsOut) == "143") << std::endl; 

    return 0;
}