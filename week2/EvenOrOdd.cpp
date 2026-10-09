#include <iostream>
//1.4 and 1.5
int main(){
    
    int n, rem, rem3;
    bool is_even;
    std::cout << "Please enter a number" << std::endl;
    std::cin >> n;

    rem = n % 2;
    rem3 = n % 3;
    is_even = (rem == 0);
    std::cout << "In the following line 0 means even and 1 means odd" << std::endl;
    std::cout << rem << std::endl;

    std::cout << 5/2.0 << std::endl;

    if(is_even) {
        std::cout << "the number is even" << std::endl;
    } 
    else {
        std::cout << "the number is odd" << std::endl;
    }

    if(rem3 == 0) {
        std::cout << "the number is a multiple of 3" << std::endl;
    } 
    else {
        std::cout << "the number is not a multiple of 3" << std::endl;
    }
}
