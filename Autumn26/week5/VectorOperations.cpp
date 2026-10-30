#include <iostream>
#include <vector>

int main(){
    std::vector<int> v; //State of array v = []

    v.push_back(10); //v = [10]
    v.push_back(20); // v = [10,20]
    std::cout << v[0] << std::endl;
    std::cout << v[1] << std::endl;
    v[0] = 15; // v = [15,20]
    v.push_back(30); //v = [15,20,30]
    std::cout << v.size() << std::endl;

    //std::cout << v << std::endl;

}
