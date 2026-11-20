#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
    std::ifstream inFile;
    inFile.open(argv[1]);
    std::string temp;
    if(inFile.is_open()) {
        while(inFile >> temp) {
            std::cout << temp << std::endl;
        }
    } else {
        std::cout << "Issue opening file" << std::endl;
    }
    
}