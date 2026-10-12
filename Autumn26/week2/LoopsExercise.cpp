#include <iostream>
//3.1
int main(){
    double average, timesPassed = 0;
    int n = 1, counter = 0;


    while(n != 0){
        std::cin >> n;
        counter = counter + n;
        timesPassed = timesPassed + 1;
        average = counter/timesPassed;
        std::cout << "The count so far:" << counter << std::endl;
        std::cout << "The average so far:" << average << std::endl;

    }
}