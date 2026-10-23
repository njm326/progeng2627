#include <iostream>

int smallest_factor(int n) {
    bool found_factor;
        for(int cf = 2; cf < n; cf++){
            if( (n % cf) == 0){ // n can be divided by cf...
                return cf;
            }
        }
        return 0;
}

int main () {
    std::cout << (smallest_factor(5) == 0) << std::endl;
    std::cout << (smallest_factor(8) == 2) << std::endl;
    std::cout << (smallest_factor(121) == 11) << std::endl;
    std::cout << (smallest_factor(20) == 2) << std::endl;

}
