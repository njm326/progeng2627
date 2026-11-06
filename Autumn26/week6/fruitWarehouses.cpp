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

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for (int i = 0; i < vin1.size(); i++)
    {
        int location = search_vector(vin1[i], vin2);
        if(location > -1) {
            vout.push_back(vin1[i]);
        }
    }
    
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for (int i = 0; i < vin1.size(); i++)
    {
        vout.push_back(vin1[i]);
    }
    for (int i = 0; i < vin2.size(); i++)
    {
        int location = search_vector(vin2[i], vin1);
        if(location == -1) {
            vout.push_back(vin1[i]);
        }
    }
}

int main () {
    std::ifstream infile1, infile2; 
    std::string fileName1, fileName2;
    std::cout << "Please input the file names of the two warehouses (with the .txt)" << std::endl;
    std::cin >> fileName1 >> fileName2;
    infile1.open(fileName1);
    infile2.open(fileName2);
    if(!infile1.is_open() && !infile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::vector <std::string> warehouse1, warehouse2, unionVector, intersectionVector;
    std::string tmp;

    while(infile1 >> tmp){
        warehouse1.push_back(tmp); 
    }
    while(infile2 >> tmp){
        warehouse2.push_back(tmp); 
    }

    intersection_vector(warehouse1, warehouse2, intersectionVector);
    union_vector(warehouse1, warehouse2, unionVector);
    std::ofstream outFile;    
    outFile.open("intersection.txt");
    if(!outFile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for (int i = 0; i < intersectionVector.size(); i++)
    {
        outFile << intersectionVector[i] << std::endl;
    }
    outFile.close();
    outFile.open("union.txt");

    if(!outFile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    for (int i = 0; i < unionVector.size(); i++)
    {
        outFile << unionVector[i] << std::endl;
    }
    outFile.close();
}