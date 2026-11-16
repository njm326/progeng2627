#include <vector>
#include <iostream>
#include <fstream>
#include <cstdlib>


int next_catalan_number (int n, std::vector<unsigned long> catalan_numbersBefore) {
    int total = 0;
    for (int p = 0; p <= n; p++){
        total += catalan_numbersBefore[p] * catalan_numbersBefore[n-p];
    }
    return total;
}

std::vector<unsigned long> catalan_numbers(int n) {
    int c0 = 1;
    std::vector<unsigned long> totalVector = {1};
    for (int i = 0; i < n; i++){
        totalVector.push_back(next_catalan_number(i, totalVector));
    }
    return totalVector;
    
}

int main() {
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    std::vector<unsigned long> numbers = catalan_numbers(n);

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << "C" << i << " = " << numbers[i] << std::endl;
    }

    std::fstream inFile;
    inFile.open("expressions.txt");
    
    if(!inFile.is_open()){ 
        std::cout << "error opening reading from file" << std::endl;
        return EXIT_FAILURE;
    }
    std::ofstream outFile;
    outFile.open("expression_counts.txt");
    if(!outFile.is_open()){ 
        std::cout << "error opening writing to file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    int totalops = 0;
    std::vector<unsigned long> catalanNumberFinder;
    while(inFile >> tmp){
        //std::cout << tmp << std::endl;
        totalops = 0;
        for(int i = 0; i < tmp.size(); i++) {
            if(tmp[i] == '+' || tmp[i] == '-' || tmp[i] == '/' || tmp[i] == '*') {
                totalops++;
            }

        }
        outFile << tmp << std::endl;
        catalanNumberFinder = catalan_numbers(totalops);
        outFile << "This has " << catalanNumberFinder[totalops] << " ways to parenthesis this" << std::endl;
    }
        
    inFile.close();
    outFile.close();

    return 0;
}