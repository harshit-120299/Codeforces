//https://leetcode.com/problems/set-matrix-zeroes/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        queue<pair<int,int>> q;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++)
                if(matrix[i][j]==0) q.push({i,j});   
        }
        while(!q.empty())
        {
            int i,j;
            i=q.front().first;
            j=q.front().second;
            q.pop();
            
            for(int k=0;k<matrix.size();k++){
                 for(int l=0;l<matrix[0].size();l++){
                     {
                         matrix[k][j]=0;
                         matrix[i][l]=0;
                     }
                 }
            }
        }
    }
};