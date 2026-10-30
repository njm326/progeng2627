#include <iostream>
#include <vector>

int main() {
    std::vector<int> sequence;
    int temp = 1;
    std::cout << "please enter a sequence terminated by 0" << std::endl;
    while(temp != 0){ 
        std::cin >> temp; 
        sequence.push_back(temp); 

    }
    for (int i = 0; i < sequence.size(); i++){
            std::cout << sequence[i] << std::endl;
    }   

    std::cout << "in reverse order:" << std::endl;
    for (int i = sequence.size() - 1; i >= 0; i--){
            std::cout << sequence[i] << std::endl;
    } 
}