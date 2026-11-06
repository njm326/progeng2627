#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; 
    std::string fileName;
    std::cout << "Please input the file name (with the .txt)" << std::endl;
    std::cin >> fileName;
    infile.open(fileName);

    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
    }

    infile.close(); 

    std::ofstream outFile;
    std::cout << "Please input the file name (with the .txt)" << std::endl;
    std::cin >> fileName;
    outFile.open(fileName);

    if(!outFile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for (int i = v.size() -1; i >= 0; i--)
    {
        outFile << v[i] << std::endl;
    }
    outFile.close();

}