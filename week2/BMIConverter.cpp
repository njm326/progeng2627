#include <iostream>
//1.4
int main() {
    double weight, height, bmi;
    std::cout << "Please enter your weight" << std::endl;
    std::cin >> weight;
    std::cout << "Please enter your height" << std::endl;
    std::cin >> height;
    bmi = weight/(height*height);
    std::cout << "Your BMI is: " << bmi << std::endl;
}