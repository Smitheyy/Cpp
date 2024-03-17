#include<vector>


void AddVectorIntoMatrix(std::vector<std::vector<int>>& matrix,  const std::vector<int>& vector){

    if(matrix.size() == 1){

        matrix.push_back(vector);
        return;

    }



    for(int i = 0; i < matrix.size() - 1; i += 2)
        matrix.insert(matrix.begin() + i + 1, vector);


}
