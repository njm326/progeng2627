#include <iostream>
#include <vector>
#include <string>

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

int main() {
    int num = 250;
    int base = 16;
    std::string output;
    std::vector<int> digits;

    if (baseConverter(num, digits, base)) {
        output = print_digits_as_number(digits);
        std::cout << output << std::endl;
    } else {
        std::cout << "Invalid base" << std::endl;
    }
    digits.clear();
    baseConverter(128, digits, 8);
    std::cout << (print_digits_as_number(digits) == "200") << std::endl;
    digits.clear();
    baseConverter(25, digits, 2);
    std::cout << (print_digits_as_number(digits) == "11001") << std::endl;
    digits.clear();
    baseConverter(112, digits, 7);
    std::cout << (print_digits_as_number(digits) == "220") << std::endl;
}