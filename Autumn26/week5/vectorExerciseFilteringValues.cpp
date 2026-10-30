#include <iostream>
#include <vector>

int main() {
    std::vector<int> sequence;
    std::cout << "Please enter the lenth of your integer sequence" << std::endl;
    int n, temp, filterNumber;
    std::cin >> n; 
    std::cout << "Please enter your sequence" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp; 
        sequence.push_back(temp); 
    }
    std::cout << "Please enter a number to be filter againsted" << std::endl;     
    std::cin >> filterNumber;
    for (int i = 0; i < sequence.size(); i++){
        if(sequence[i] < filterNumber) {
            std::cout << sequence[i] << std::endl;

        }
    }  
}