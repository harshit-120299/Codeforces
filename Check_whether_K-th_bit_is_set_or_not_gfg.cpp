//Initial Template for C++
//bit magic
//https://practice.geeksforgeeks.org/viewSol.php?subId=334c6240a5492dc429b280cfe913ea5c&pid=701154&user=harshitjain11
#include <bits/stdc++.h>
using namespace std;

void c_p_c()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}


 // } Driver Code Ends


//User function Template for C++

int findk(int n){
    int i=1,bitpos=0;
    while(i*2<=n){
        i=i*2;
        ++bitpos;
    }
    return bitpos;  
}

// Function to check if Kth bit is set or not
bool checkKthBit(int n, int k){
    int find_k;
    if(k==0){
        if(n%2==0)
            return false;
        else return true;

    }
    else {
        while(findk(n)>=k){
            find_k=findk(n);
            if(find_k==k)
                return true;
            n=n-pow(2,find_k);
            
        }    
    }
    return false;
}


// { Driver Code Starts.

int main()
{   //IOS;
    c_p_c();
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int k;
        cin>>k;
        
        if(checkKthBit(n, k))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}  // } Driver Code Ends