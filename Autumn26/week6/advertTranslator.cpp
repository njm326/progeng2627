#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

int search_vector(std::string s, const std::vector<std::string>& vin) {
    for (int i = 0; i < vin.size(); i++)
    {
        if(s == vin[i]) {
            return i;
        }
    }
    return -1;
}
int main() {
    std::ifstream infile1, infile2; 
    std::string fileName1, fileName2;
    std::cout << "Please input the file names of the text to be translated and then the translations (with the .txt)" << std::endl;
    std::cin >> fileName1 >> fileName2;
    infile1.open(fileName1);
    infile2.open(fileName2);
    if(!infile1.is_open() && !infile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string temp;
    std::vector <std::string> words, orgnialWords, translatedWords;


    while(infile2 >> temp) {
        words.push_back(temp);
    }
    for (int i = 0; i < words.size(); i++){
        if(i%2 == 1) {
            translatedWords.push_back(words[i]);
        } else{
            orgnialWords.push_back(words[i]);
        }
    }
    
    std::string outfileName;
    std::cout << "Please enter the name of the out file (with .txt)" << std::endl;
    std::cin >> outfileName;
    std::ofstream outFile;    
    outFile.open(outfileName);
    if(!outFile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    int location;
    while(infile1 >> temp) {
        location = search_vector(temp, orgnialWords);
        if(location != -1) {
            outFile << translatedWords[location] << std::endl;

        }
        else {
            outFile << temp << std::endl;
        }
    }
    outFile.close();
}