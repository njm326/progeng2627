#include <iostream>

int main(){
    int n, currmax, currmin;
    std::cout << "please enter number:" << std::endl;
    std::cin >> n;
    currmax = n;
    currmin = n;
    while(n != 0) {
        
        std::cout << "maximum so far: " << currmax << std::endl;
        std::cout << "minimum so far: " << currmin << std::endl;
        std::cin >> n;
        if(n > currmax) {
            currmax = n;
        }
        if( n < currmin) {
            currmin = n;
        }
    }

}