#include <iostream>

int myfactorial(int in){

    int factorialResult = 1;

    for(int i = 1; i <= in; i++){
        factorialResult = factorialResult*i;
    }

    return factorialResult;
}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}