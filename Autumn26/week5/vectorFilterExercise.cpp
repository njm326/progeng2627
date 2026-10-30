#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout) {
    for (int i = 0; i < vin.size(); i++)
    {
        if(vin[i] < t) {
            vout.push_back(vin[i]);
        }
    }
    
}

int main() {

    std::vector<double> vout;
    filter_v ({1,6,5,3}, 5, vout);
    std::cout << (vout.size() == 2) << std::endl;
    vout.clear();
    filter_v ({1,3}, {2}, vout);
    std::cout << (vout.size() == 1) << std::endl;
    vout.clear();
    filter_v ({1,3,1245,73,8,3,845,6}, {17}, vout);
    std::cout << (vout.size() == 5) << std::endl;
}