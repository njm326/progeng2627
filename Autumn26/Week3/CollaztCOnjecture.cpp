#include <iostream>

int main(){
    int n, max, steps = 0;
    std::cout << "please enter number:" << std::endl;
    std::cin >> n;
    max = n;
    while(n > 1) {
        if(n%2 == 0) {
            n = n/2;
        }
        else {
            n = 3*n+1;
        }
        std::cout << n << std::endl;
        steps++;
        if(n > max) {
            max = n;
        }
    }
    std::cout << "maximum value reached: " << max << std::endl;
    std::cout << "steps need to reach one: " << steps << std::endl;

}