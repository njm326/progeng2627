#include <iostream>
#include <vector>
int min_vector_element(const std::vector<double>& vin) {
    if(vin.size() == 0) {
        return -1;
    } else {
        int min = vin[0], minLocation = 0;
        for (int i = 1; i < vin.size(); i++)
        {
            if(min > vin[i]) {
                min = vin[i];
                minLocation = i;
            }
        }
        return minLocation;
    }
}


int main(){
    std::cout << (min_vector_element({}) == -1) << std::endl;
    std::cout << (min_vector_element({5}) == 0) << std::endl;
    std::cout << (min_vector_element({5,7,3}) == 2) << std::endl;
    std::cout << (min_vector_element({2,95,47,25,8}) == 0) << std::endl;

}