//https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0#
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#include <unordered_map>
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
#define INF 0x7f7f7f7f7f7f7f7f
#define MOD 1000000007
const long double pi=3.1415926535897932384626433832; 


int findMaxSum(int arr[], int n) {
    int sum=0, max=arr[0];
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
        
        if(sum>max) max=sum;
        if(sum<0) sum=0;
    }
    return max;
}


int main() {
    int t; cin >> t;
    
    while (t--) {
        int n;
        cin >> n; int arr[n];
        for (int i=0; i<n; i++) cin>>arr[i];
        cout << findMaxSum(arr, n) << endl;
    }
    
    //cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

}
