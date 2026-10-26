#include <iostream>

int gcd(int a, int b) {
    //Greates common divisor

    int remainder, largerNumber, divider;
    //Set the smallest as the remainder
    if(a > b) {
        divider = b;
        largerNumber = a;
    }
    else {
        divider = a;
        largerNumber = b;
    }
    bool greatestCommonDivisorNotFound = true;
    while (greatestCommonDivisorNotFound)
    {
        remainder = largerNumber%divider;
        if(remainder == 0) {
            greatestCommonDivisorNotFound = false;
        } else {
            largerNumber = divider;
            divider = remainder;
        }
    }
    return divider;
    
}


int euler_totient(int n) {
    int count = 0;
    for(int i = 1; i < n; i++){
        if(gcd(i,n) == 1) {
            count++;
        }
    }
    return count;
}

int totient_sum(int n, int &depth) {
    int sumOfValues;
    depth = 0;
    while(n != 1) {
        n = euler_totient(n);
        sumOfValues += n;
        depth++;
    }

    return sumOfValues;
}

int totient_strongestLocalPeak(int x, int y, int&depthBefore, int&depthAt, int&depthAfter) {
    int a, b, c;
    int depthA, depthB, depthC;
    int peakStrength;
    int locationOfPeak, maxPeakStrength = -1;
    a = totient_sum(x, depthA);
    b = totient_sum(x+1, depthB);
    depthAt = -0;
    depthBefore = 0;
    depthAfter = 0;
    locationOfPeak = -1;
    for(int i = x+2; i <= y; i++){
        c = totient_sum(i, depthC);
        if(depthB > depthA && depthB > depthC) {
            peakStrength = ((depthB - depthA + depthB - depthC) / 2);
            if(peakStrength > maxPeakStrength) {
                maxPeakStrength = peakStrength;
                locationOfPeak = i-1;
                depthBefore = depthA;
                depthAt = depthB;
                depthAfter = depthC;
            }
        }
        depthA = depthB;
        depthB = depthC;
    }
    return locationOfPeak;

}

int main() {
    std::cout << (gcd(17,426) == 1) << std::endl;
    std::cout << (gcd(40,8) == 8) << std::endl;
    std::cout << (gcd(48, 18) == 6) << std::endl;
    std::cout << (euler_totient(9) == 6) << std::endl;
    std::cout << (euler_totient(12) == 4) << std::endl;
    std::cout << (euler_totient(17) == 16) << std::endl;
    int depth, depthBefore, depthAt, depthAfter;
    std::cout << (totient_sum(30, depth) == 15) << "," << (depth == 4) << std::endl;
    std::cout << (totient_strongestLocalPeak(14, 20, depthBefore, depthAt, depthAfter) == 17) << "," << (depthBefore == 4) << "," << (depthAt == 5) << "," << (depthAfter == 3) <<  std::endl;
    std::cout << (totient_strongestLocalPeak(14, 16, depthBefore, depthAt, depthAfter) == -1) << "," << (depthBefore == 0) << "," << (depthAt == 0) << "," << (depthAfter == 0) <<  std::endl;
    std::cout << totient_strongestLocalPeak(1, 100, depthBefore, depthAt, depthAfter) << std::endl;
    //Graphical of depths from 1 to 100
    for(int i = 1; i <= 100; i++) {
        totient_sum(i, depth);
        for(int x = 0; x < depth; x++) {
            std::cout << "|";
        }
        std::cout << std::endl;
    }
    
}