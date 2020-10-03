//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


class Solution{
public:
    int *findTwoElement(int *arr, long long n) {
        int missing,repeated;
        long long sum=0,actsum;
        
        for(int i=0;i<n;i++) {
            sum=sum+arr[i];
        }
        
        for(int i=0;i<n;i++){
            int ind=arr[i];
            if(ind<0)   ind=-ind;

            if(arr[ind-1]<0)
                repeated=ind;
            else
                arr[ind-1]=-arr[ind-1];
        }
        
        actsum=(n*(n+1))/(long long)2;
        missing=actsum-(sum-repeated);

        int *a = new int[2];
        a[0] = repeated;
        a[1] = missing;

        return a;   
    }
};


// { Driver Code Starts.

void cpc()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

int main()
{   //IOS;
    cpc();    int t;
  
    cin >> t;
    while (t>0) {
        t--;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends