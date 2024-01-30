#include <bits/stdc++.h> 
int coverageOfMatrix(vector<vector<int>> &mat) {
    int row = mat.size();
    int col = mat[0].size();
    int count = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(mat[i][j] == 0){
                //for left 1
                if(j>0 && mat[i][j-1] == 1){
                    count++;
                }
                //for right 1
                if(j<col-1 && mat[i][j+1] == 1){
                    count++;
                }
                //for upper 1
                if(i>0 && mat[i-1][j] == 1){
                    count++;
                }
                //for lower 1
                if(i<row-1 && mat[i+1][j] == 1){
                    count++;
                }
            }
        }
    }
    return count;

}
