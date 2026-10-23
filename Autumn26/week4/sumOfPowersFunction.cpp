#include <iostream>
#include <cmath>


double myPower(double base, double exponent) {
    double powerResult = 1;
    for(int i = 0; i < std::abs(exponent); i++) {
        powerResult = powerResult*base;
    }
    if(exponent < 0) {
        powerResult = 1/powerResult;
    }
    return powerResult;
}

double sumOfPowers (double x, double n){
    //For loop to go through each of powers from 1 -> x
    double sumOfPowersTotal = 0;
    for(int i = 1; i <= n; i ++) {
        sumOfPowersTotal += myPower(x, i);
    }
    //Negative way
    for(int i = -1; i >= n; i --) {
        sumOfPowersTotal += myPower(x, i);
    }
    return sumOfPowersTotal;
}

int main(){


    std::cout << (sumOfPowers(2,3) == 14) << std::endl;
    std::cout << (sumOfPowers(2,-1) == 0.5) << std::endl;
    std::cout << (sumOfPowers(2,4) == 30) << std::endl;
    std::cout << (sumOfPowers(3,3) == 39) << std::endl;

    //Get the x and n values where Sum (i = 1->n) (x^i)
    std::cout << "Please input x and n values where SUm (i = 1-> x) x^i" << std::endl;
    double x, n;
    std::cin >> x >> n;
    
    std::cout << "The sum of powers for x: " << x << " and n: " << n << " is: " << sumOfPowers(x,n) << std::endl;
}