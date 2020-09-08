// C++ program to find LCM of n elements 
#include <bits/stdc++.h> 
using namespace std; 

typedef long long ll;
void c_p_c()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}


int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 

ll findlcm(int arr[], int n) 
{ 
    ll ans = arr[0]; 
    for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
    return ans; 
} 

int main() 
{ 
    c_p_c()
    int n;
    cin>>n;
    int arr[n];
    for (int t = 1; t <= n; t++) {
        arr[t-1]=t;
    }
    printf("%lld", findlcm(arr, n)); 
    return 0; 
} 
