#include <iostream>

int main(){
    //Checks if the user has inputted a value in the correct range - while loop
    int n = 0;
    while(n < 8 || n > 111) {
        std::cout << "Please enter a integer value greater than 7 and smaller than 112" << std::endl;
        std::cin >> n;
    }
    //Does wibble wobble wabble
    std::cin >> n;
    for(int i = 1; i < n; i++) {
        std::cout << i;
        if(i%2 == 0) {
            std::cout << "wibble";
        }
        if(i%7 == 0) {
            std::cout << "wobble";
        }
        if(i%15 == 0) {
            std::cout << "wabble";
        }
        std::cout << std::endl;
    } 
}