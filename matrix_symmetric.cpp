#include <bits/stdc++.h> 
bool isMatrixSymmetric(vector<vector<int>> matrix){
    int row = matrix.size();
    int col = matrix[0].size();
    for(int i =0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j] != matrix[j][i]){
                return false;
            }
        }
    }
    return true;
}
