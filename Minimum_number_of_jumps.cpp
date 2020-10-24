//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps/0
#include <bits/stdc++.h>
using namespace std;


int find_min_steps(int arr[],int n) {

    if( arr[0] == 0 ) return -1;
    int max_reach = arr[0];
    int current_max = arr[0];
    int jumps=0;
    
    for(int i=1; i<n; i++) {
        
        max_reach = max(max_reach,i+arr[i]);
        
        if(current_max == i || i == n-1) {
            jumps++;
            current_max = max_reach;
        }
        
        if( max_reach <= i ) return -1;
    }

    return jumps;
    
}
int main() {
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
    //IOS;
 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<find_min_steps(arr,n)<<endl;
    }
    return 0;
}