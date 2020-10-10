//https://leetcode.com/problems/set-matrix-zeroes/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> r,c;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++)
                if(matrix[i][j]==0){ 
                    if(c.find(j)==c.end()) c.insert(j);
                    if(r.find(i)==r.end()) r.insert(i);
                }
        }
        
        for(auto it=r.begin();it!=r.end();it++){
            int i=*it;
            for(int l=0;l<matrix[0].size();l++)
               matrix[i][l]=0;
        }

        for(auto it=c.begin();it!=c.end();it++){
            int j=*it;
            for(int k=0;k<matrix.size();k++)
               matrix[k][j]=0;
        }
        
    }
};