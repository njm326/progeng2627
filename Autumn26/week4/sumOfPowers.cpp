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

int main(){
    //Get the x and n values where Sum (i = 1->n) (x^i)
    std::cout << "Please input x and n values where SUm (i = 1-> x) x^i" << std::endl;
    double x, n, sumOfPowers = 0;
    std::cin >> x >> n;
    //For loop to go through each of powers from 1 -> x
    for(int i = 1; i <= n; i ++) {
        sumOfPowers += myPower(x, i);
    }
    //Negative way
    for(int i = -1; i >= n; i --) {
        sumOfPowers += myPower(x, i);
    }
    std::cout << "The sum of powers for x: " << x << " and n: " << n << " is: " << sumOfPowers << std::endl;
}