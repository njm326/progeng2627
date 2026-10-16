#include <iostream>

int main() {
    int n, counter = 0;

    std::cin >> n;

    while (counter < n) {
        std::cout << counter << " counter" << std::endl;
        counter = counter + 1;
    }

    for(int indexer = 0; indexer < n; indexer = indexer + 1) {
        std::cout << indexer << " indexer" << std::endl;
    }

    for(int i = 0; i < n; i++) {

    }

    for(int i = 0; i < 7; i++){
        std::cout << i << std::endl;
    }
}