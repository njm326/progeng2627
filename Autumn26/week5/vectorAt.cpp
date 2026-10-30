#include <iostream>
#include <vector>

int main(){
    std::vector<int> v; 

    v.push_back(12);
    v.push_back(25);

    std::cout << v.at(0) << std::endl;

    std::cout << v.at(1) << std::endl;

    v.at(1) = 17;

    std::cout << v.at(1) << std::endl;

    v.at(2) = 23;

    std::cout << v.at(2) << std::endl;

}