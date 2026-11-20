#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
std::vector<double> line_to_vector(std::string s){

    std::stringstream ss;
    std::string tmp;
    std::vector<double> out;
    ss << s;
    while(ss >> tmp){
        // std::stod converts from string to double
        out.push_back(std::stod(tmp));
    }
    return out;
}

std::vector<std::vector<double>> read_matrix_from_file(std::string input_file){

    std::ifstream infile;
    infile.open(input_file);
    if(!infile.is_open()){
        std::cout << "error opening file " << input_file << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::string line;
    std::vector<std::vector<double>> out;

    while(std::getline(infile, line)){
        out.push_back(line_to_vector(line));
    }

    return out;
}

std::vector<double> matrix_colloum_extraction (int colloumn,const std::vector<std::vector<double>>& m) {
    std::vector<double> coloumnVector;
    for (int i = 0; i < m.size(); i++)
    {
        coloumnVector.push_back(m[i][colloumn]);
    }
    return coloumnVector;
}

std::vector<std::vector<double>> matrix_mult(const std::vector<std::vector<double>>& m1,const std::vector<std::vector<double>>& m2) {
    std::vector<std::vector<double>> result;

    for(int i = 0; i < m1.size(); i++){

        std::vector<double> colloum = matrix_colloum_extraction(i, m2);
        std::vector<double> newRow;

        for(int j = 0; j < m1[0].size(); j++){

            // bidimensional indexing
            newRow.push_back(m1[i][j] * colloum[j]);
        }
        result.push_back(newRow);

    }
    return result;
}

std::string matrix_to_string(std::vector<std::vector<double>> m){

    std::stringstream out;
    // to set precision when printing
    out << std::fixed << std::setprecision(2);
    for(int i = 0; i < m.size(); i++){

        for(int j = 0; j < m[0].size(); j++){
            out << (m[i][j]) << "\t";
        }
        out << "\n";
    }

    return out.str();
}

int main(int argc, char* argv[]){

    if(argc != 3){
        std::cout << "two arguments needed" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::vector<double>> m1 = read_matrix_from_file(argv[1]);
    std::vector<std::vector<double>> m2 = read_matrix_from_file(argv[2]);

    std::vector<std::vector<double>> m3 = matrix_mult(m1, m2);

    std::cout << matrix_to_string(m1) << std::endl;
    std::cout << "*" << std::endl << std::endl;
    std::cout << matrix_to_string(m2) << std::endl;
    std::cout << "=" << std::endl << std::endl;
    std::cout << matrix_to_string(m3) << std::endl;

}