#include <iostream>
#include <string>
//2.3
int main() {
    double temp_in, temp_out;
    std::string unit_in, unit_out;
    bool valid_unit = true;
    const double farenheight_to_celciusfactor = 1.8;
    std::cin >> temp_in >> unit_in;
    if(unit_in == "f" || (unit_in == "F")) {
        unit_out = "c";
        temp_out = (temp_in -32)/farenheight_to_celciusfactor;
    }
    else if ((unit_in == "c") || (unit_in == "C")){
        unit_out = "f";
        temp_out = temp_in*farenheight_to_celciusfactor + 32;
    }
    else {
        valid_unit = false;
    }
    if(valid_unit) {
        std::cout << temp_out << " " << unit_out << std::endl;
    } else {
        std::cout << "Unit not recognized" << std::endl;
    }
}