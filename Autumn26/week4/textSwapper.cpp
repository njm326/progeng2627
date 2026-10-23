#include <iostream>
#include <string>

void stringSwap(std::string& text1, std::string& text2){

    std::string tmp;
    tmp = text1;
    text1 = text2;
    text2 = tmp;

}


int main(){
    std::string text1, text2;

    std::cout << "please enter two strings" << std::endl;
    std::cin >> text1 >> text2;

    std::cout << "you entered:" << std::endl;
    std::cout << "text1: " << text1 << std::endl;
    std::cout << "text2: " << text2 << std::endl;

    stringSwap(text1,text2);
    std::cout << "after swapping the values:" << std::endl;
    std::cout << "text1: " << text1 << std::endl;
    std::cout << "text2: " << text2 << std::endl;

}