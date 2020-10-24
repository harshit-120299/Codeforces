//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends





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