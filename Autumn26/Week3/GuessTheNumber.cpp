#include <iostream>

int main(){
    int n, max, min, userChoice;
    std::cout << "Enter the maximum and then minimum range of your number to be guessed" << std::endl;
    std::cin >> max >> min;
    bool notFoundUserNumber = true;
    while (notFoundUserNumber) {
        std::cout << "Is your value: " << (max+min)/2 << std::endl;
        std::cout << "If it is your value enter 1 if it is lower enter 2 and if it is higher enter 3" << std::endl;
        std::cin >> userChoice;
        if(userChoice == 1) {
            notFoundUserNumber = false;
        } 
        else if(userChoice == 2) {
            max = (max+min)/2;
        } 
        else if(userChoice == 3) {
            min = (max+min)/2+1;
        }
    }
    std::cout << "Your value is: " << (max+min)/2 << std::endl;
}
