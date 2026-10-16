#include <iostream>

int main(){
    int n;

    std::cin >> n;
    for(int i1 = 0; i1 < n; i1++) {
        for(int i2 = 0; i2 < n; i2++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << n << std::endl;

    //While version
    std::cin >> n;
    int i1 = 0, i2;
    while(i1 < n) {
        i2 = 0;
        while(i2 < n) {
            std::cout << "*";
            i2 ++;
        }
        std::cout << std::endl;
        i1 ++;
    }
    std::cout << n << std::endl;

}