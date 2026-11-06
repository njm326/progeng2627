#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

int search_vectorForTotal(std::string s, const std::vector<std::string>& vin) {
    int total = 0;
    for (int i = 0; i < vin.size(); i++)
    {
        if(s == vin[i]) {
            total++;
        }
    }
    return total;
}

int main () {
    std::ifstream infile1, infile2; 
    std::string fileName1, fileName2;
    std::cout << "Please input the file names of the text to be searched and then the file with the words to be searched with (with the .txt)" << std::endl;
    std::cin >> fileName1 >> fileName2;
    infile1.open(fileName1);
    infile2.open(fileName2);
    if(!infile1.is_open() && !infile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string temp;
    std::vector <std::string> textToBeSearchedV;

    while(infile1 >> temp) {
        textToBeSearchedV.push_back(temp);
    }
    while(infile2 >> temp) {
        std::cout << temp << ": " << search_vectorForTotal(temp, textToBeSearchedV) << std::endl;
    }
    
}