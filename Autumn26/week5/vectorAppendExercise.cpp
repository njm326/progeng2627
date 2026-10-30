#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout) {
    for (int i = 0; i < vin1.size(); i++)
    {
        vout.push_back(vin1[i]);
    }
    for (int i = 0; i < vin2.size(); i++)
    {
        vout.push_back(vin2[i]);
    }
    
}

int main() {

    std::vector<int> vout;
    append_vectors ({1,6,5,3}, {2,3,4}, vout);
    std::cout << (vout[4] == 2) << std::endl;
    vout.clear();
    append_vectors ({1,3}, {2}, vout);
    std::cout << (vout[2] == 2) << std::endl;

}