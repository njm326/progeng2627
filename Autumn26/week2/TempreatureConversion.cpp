#include <iostream>
//1.4
int main() {
    double celcius;
    std::cout << "Please enter the tempreature in celcius" << std::endl;
    std::cin >> celcius;
    std::cout << celcius << " celcius degrees is " << celcius*1.8 + 32 << " farenheight degrees " << std::endl;
}