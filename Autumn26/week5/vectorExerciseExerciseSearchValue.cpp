#include <iostream>
#include <vector>
int search_vector(int n, const std::vector<int>& vin) {
    if(vin.size() == 0) {
        return -1;
    } else {
        for (int i = 0; i < vin.size(); i++)
        {
            if(n == vin[i]) {
                return i;
            }
        }
        return -1;
    }
}


int main(){
    std::cout << (search_vector(2, {}) == -1) << std::endl;
    std::cout << (search_vector(5, {5}) == 0) << std::endl;
    std::cout << (search_vector(3, {5,7,3}) == 2) << std::endl;
    std::cout << (search_vector(25, {2,95,47,25,8}) == 3) << std::endl;

}