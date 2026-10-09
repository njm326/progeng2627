#include <iostream>
//1.4
int main() {
    int length, width, perimeter, area;
    std::cout << "Please enter the length of the rectangle" << std::endl;
    std::cin >> length;
    std::cout << "Please enter the width of the rectangle" << std::endl;
    std::cin >> width;
    std::cout << "The perimeter of the rectangle is = " << 2*length+2*width << " and the area is =" << width*length << std::endl;
}