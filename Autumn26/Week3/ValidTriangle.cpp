#include <iostream>
#include <string>
#include <cmath>

int main() {
    double a, b, c, perimeter, s, area;
    std::cout << "Enter three side lengths: ";
    std::cin >> a >> b >> c;
    bool validTrianlge = false;
    if(a+b > c && a+c >b && b+c >a) {
        validTrianlge = true;
    } else {
        std::cout << "Triangle not valid";
    }
    std::string triangleType;
    if(validTrianlge) {
        if(a== b && b == c) {
            triangleType = "Equilatral";
        }
        else if(a != b && b != c && a !=c) {
            triangleType = "scalene";
        }
        else {
            triangleType = "isosceles";
        }
        perimeter = a + b + c;
        s = 0.5*(a+b+c);
        area = std::sqrt((s)*(s-a)*(s-b)*(s-c));
        std::cout << "The triangle type is: " << triangleType << std::endl;
        std::cout << "The triangle perimeter is: " << perimeter << std::endl;
        std::cout << "The triangle area is: " << area << std::endl;
    }
}