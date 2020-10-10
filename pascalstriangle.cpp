//https://practice.geeksforgeeks.org/problems/pascal-triangle0652/1
//https://leetcode.com/problems/pascals-triangle-ii
//this gives tle on gfg but faster than 100% submissions on leetcode
#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

void c_p_c() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {  
        // code here
        ll mod=1e9+7;
        vector<ll> v;
        vector<ll> vc;
    
        
        v.push_back(1); if (n==1) return v;
        v.push_back(1); if (n==2) return v;
        
        for(int i=2;i<n;i++){
            vc=v;
            v.clear();
            v.push_back(1);
            for(int j=0;j<vc.size()-1;j++){
                v.push_back(((vc[j]%mod)+(vc[j+1]%mod))%mod);
            }
            v.push_back(1);
        }
        
        return v;
    }
};


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    c_p_c();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

//another solution as combinations ie nCr 
//as every row represent a binomial equation

// class Solution{
//     public:
    
//     int comb(int n,int r){
//         long long c=1;
//         for(int i=1;i<=r;i++) {// n!/(n-r)!
//             c=((c*n))/i;  n--;
//         }
//         return c;
//     }

//     vector<int> getRow(int n) {  
//         // code here
//         n++;
//         vector<int> v;
//         for (int i = 0; i < n; ++i)
//             v.push_back(comb(n-1,i));
//         return v;
//     }
// };