#include <vector>
#include <iostream>

void addvectorintomatrix(std::vector<std::vector<int>>& matrix, const std::vector<int>& vector){

    if(matrix.size() == 1){

        matrix.push_back(vector);
        return;

    }

    else{

        for(int i = 0; i < matrix.size() - 1; i+=2){

            matrix.insert(matrix.begin() + i + 1, vector);
        }
    }

}

void displaymatrix(const std::vector<std::vector<int>>& matrix){

    for(auto & i : matrix){
        for(int j : i){
            std::cout << j << '\t';
        }
        std::cout << std::endl;
    }
}