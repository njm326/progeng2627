#include <iostream>
#include <vector>

int main() {
    std::vector<int> v; 

    v.push_back(7); 
    v.push_back(30); 
    v.push_back(7);
    //first element * (second element + third element)
    std::cout << v[0]*(v[1]+v[2]) << std::endl;
}