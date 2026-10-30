#include <iostream>
#include <vector>

// Copy 
/*
std::vector<int> from_1_to_n(int n){

    std::vector<int> vout;

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

    return vout;

}*/
//refrence
void from_1_to_n(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}
//Normal version
/*
int main(){
    std::vector<int> v;

    //v = from_1_to_n(5);
    from_1_to_n(5, v);


    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }

}*/
//Issue version prediction: 1,2,3 - 1,2,3,1,2,3,4 - 1,2,3,1,2,3,4,1,2,3,4,5 ...
int main(){
    // this program will not work as expected...
    std::vector<int> v;

    for(int n = 3; n < 7; n++){
        //amend
        v.clear();
        from_1_to_n(n, v);
            
        std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < v.size(); i++){
            std::cout << v[i] << std::endl;
        }
    }
}