//https://leetcode.com/problems/pascals-triangle/
typedef long long ll ;
class Solution{
public:
    vector<vector<int>> generate(int n) {  
        // code here
        ll mod=1e9+7;
        vector<int> v,v1;
        vector<vector<int>> vc;
        
        if(n==0) return vc;
        v.push_back(1);
        vc.push_back(v); 
        if (n==1) return vc;
        v.push_back(1);
        vc.push_back(v); 
        if (n==2) return vc;
        
        for(int i=2;i<n;i++){
            v1=v;
            v.clear();
            v.push_back(1);
            for(int j=0;j<v1.size()-1;j++){
                v.push_back((v1[j])+(v1[j+1]));
            }
            v.push_back(1);
            vc.push_back(v);
        }
        
        return vc;
    }
};