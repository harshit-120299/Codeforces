#include <bits/stdc++.h>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

 // } Driver Code Ends

class Solution{
public:
    vector<ll> modularInverse(ll n, ll prime) {
        vector<ll> dp(n + 1);
        dp[0] = dp[1] = 1;
        for (int i = 2; i <= n; i++)
            dp[i]=dp[prime%i]*(prime-prime/i)%prime;
        return dp;
    }
    
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        const ll MOD = 1e9 + 7; vector<ll> v;
        auto mod = modularInverse(n, MOD); int c = 1;
        for (int i = 1; i <= n; i++) {
            v.push_back(c);
            c = ((c % MOD * (n - i)) % MOD * mod[i]) % MOD;
        }
        return v;
    }
};


// { Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}


void c_p_c() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


int main() {
    IOS;
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
  // } Driver Code Ends