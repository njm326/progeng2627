#include <iostream>

void rectanglePandSFinder(double& length, double& width, double& perimeter, double& area) {
    area = length * width;
    perimeter = 2*width + 2*length;
}

int main() {
    std::cout << "Please input the length and width of the rectangle" << std::endl;
    double length, width, perimeter, area;
    std::cin >> length >> width;
    rectanglePandSFinder(length, width, perimeter, area);
    std::cout << "The area of the rectangle is: " << area << " and the perimeter is: " << perimeter << std::endl;
}
