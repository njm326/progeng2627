#include <iostream>
#include <vector>

int main() {
    std::vector<int> sequence;
    std::cout << "Please enter the lenth of your integer sequence" << std::endl;
    int n, temp, filterNumber, occurences = 0;
    std::cin >> n; 
    std::cout << "Please enter your sequence" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp; 
        sequence.push_back(temp); 
    }
    std::cout << "Please enter a number to be filter againsted" << std::endl;     
    std::cin >> filterNumber;
    std::vector <int> indices;
    for (int i = 0; i < sequence.size(); i++){
        if(sequence[i] == filterNumber) {
            occurences ++;
            indices.push_back(i);
        }
    }  

    if(occurences > 0) {
        std::cout << "There are " << occurences << " occurences of " << filterNumber << std::endl;
        
        for (int i = 0; i < indices.size(); i++){
            std::cout << indices[i] << std::endl;
        }
    } else {
        std::cout << "There are no occurences of " << filterNumber << std::endl;
    }
    
    
}