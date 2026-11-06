#include <iostream>
#include <fstream>

int main() {
    std::fstream inFile;
    inFile.open("input.txt");
    
    if(inFile.is_open()) {
        int tmp;
        /*inFile >> tmp;
        std::cout << tmp << std::endl; //Reads and prints first number in file

        inFile >> tmp;
        std::cout << tmp << std::endl;//Reads and pritns second number in file
        inFile.close();*/
        int total = 0;
        while(inFile >> tmp){
            std::cout << tmp << std::endl;
            total += tmp;
        }
        std::cout << "Total: " << total << std::endl;
        inFile.close();
    } else {
        std::cout << "Error opening file" << std::endl;
    }
}