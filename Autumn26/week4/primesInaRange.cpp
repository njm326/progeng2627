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
    int x,y;
    std::cout << "Enter two numbers to get a range of primes" << std::endl;
    std::cin >> x >> y;
    for(int i = x; i < y; i++) {
        if(smallest_factor(i) == 0) {
            std::cout << i << std::endl;
        }
    }
}
