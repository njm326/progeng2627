#include <iostream>

int main(){
    int n;
    std::cout << "Please enter a integer value greater than 1" << std::endl;
    std::cin >> n;
    bool foundFactor = false;
    for(int cf = 2; cf < n; cf++){
        if((n%cf) == 0) {
            foundFactor = true;
        }
    }
    if(foundFactor) {
        std::cout << "The number is not a prime" << std::endl;
    }
    else {
        std::cout << "The number is a prime" << std::endl;
    }
}