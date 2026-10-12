#include <iostream>
#include <string>
//3.1
int main(){
    double x, acc = 1;
    int n, counter = 0;

    std::cin >> x >> n;

    while(counter < n){

        //std::cout << "hello:" << counter << std::endl;
        acc = acc* x;
        counter = counter + 1;

    }
    std::cout << x << "^" << n << " = " << acc << std::endl;

    #include <iostream>

    std::cin >> n;

    while((n < 11) && (-11 <n )){
        std::cout << n << std::endl;
        std::cin >> n;
    }
    std::string endString;
    std::cin >> endString;
    bool end = true;
    while(end){
        std::cout << endString << std::endl;
        std::cin >> endString;
        if(endString == "STOP") {
            end = false;
        } 
        else if(endString == "Stop"){
            end = false;
        } 
        else if(endString == "stop") {
            end = false;
        }
    }
}