//https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
class Solution{   
public:
int getMinDiff(int arr[], int n, int k) {
        
    if ( n == 1) return 0; //return 0 if only 1 tower available     

    sort(arr, arr+n); //sort

    int ans = arr[n-1] - arr[0]; //keep diff as if already minimized

    int small = arr[0] + k; 
    int big = arr[n-1] - k; 

    if (small > big) swap(small, big);  

    for (int i = 1; i < n-1; i ++) { 
        int subtract = arr[i] - k; 
        int add = arr[i] + k; 

        if (subtract <= small && add >= big) 
            big - subtract <= add - small ? small = subtract : big = add; 
    } 
    
    return min(ans, big - small); 
    
}
};


// { Driver Code Starts. int main() { freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout); IOS; int t;  cin >> t; while (t--) { int
k, n; cin >> k; cin >> n; int arr[n]; for (int i = 0; i < n; i++) { cin >>
arr[i]; } Solution ob; auto ans = ob.getMinDiff(arr, n, k); cout << ans <<
"\n"; } return 0; }  // } Driver Code std::ends;