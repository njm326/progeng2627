#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;

    std::cout << "Please enter the lenth of your integer sequence" << std::endl;
    int n, temp;
    std::cin >> n; 
    std::cout << "Please enter your sequence" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp; 
        v.push_back(temp); 
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}