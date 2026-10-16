#include <iostream>

int main(){
    int n, x, total = 1;

    std::cin >> n >> x;
    for(int i = 0; i < n; i++) {
        total = total * x;
    }
    std::cout << x << "^" << n << " = " << total << std::endl;
}