#include <iostream>

double maxOfTwo (double x, double y) {
    double max;
    if(x > y) {
        max = x;
    } else {
        max =y;
    }
    return max;
}

double maxOfThree (double x, double y, double z) {
    double max;
    if(x > y) {
        max = x;
    } else {
        max = y;
    }
    if(z > max) {
        max = z;
    }
    return max;
}

int main () {
    //Max of three numbers
    std::cout << "please input 2 numbers" << std::endl;
    double x, y, z;
    std::cin >> x >> y;
    std::cout << "The maximum of the numbers was: " << maxOfTwo(x, y) << std::endl;
    //Max of two numbers
    std::cout << "please input another number" << std::endl;
    std::cin >> z;
    std::cout << "The maximum of the numbers was: " << maxOfThree(x, y, z) << std::endl;
}