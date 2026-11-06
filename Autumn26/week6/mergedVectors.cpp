#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged) {
    int v1Postion = 0, v2Postion = 0;
    while(v1Postion < v1.size() && v2Postion < v2.size()) {
        if(v1[v1Postion] < v2[v2Postion]) {
            merged.push_back(v1[v1Postion]);
            v1Postion ++;
        } else {
            merged.push_back(v2[v2Postion]);
            v2Postion ++;
        }
    }
    if((v1Postion < v1.size())) {
        for (int i = v1Postion; i < v1.size(); i++)
        {
            merged.push_back(v1[i]);
        }
        
    }  
    if((v2Postion < v2.size())) {
        for (int i = v2Postion; i < v2.size(); i++)
        {
            merged.push_back(v2[i]);
        }
    }
    
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    out.clear();
    v1 = {1, 1, 1, 1};
    v2 = {1, 1, 1};
    expected_output = {1, 1, 1, 1, 1, 1, 1};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
    out.clear();
    v1 = {1, 2, 3, 4};
    v2 = {5, 6, 7};
    expected_output = {1, 2, 3, 4, 5, 6, 7};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
    out.clear();
    v1 = {21, 22, 25, 27};
    v2 = {21, 22, 25, 27};
    expected_output = {21, 21, 22, 22, 25, 25, 27, 27};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}