#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends




class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int missing,repeated,sum=0,actsum;
        
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        
        for(int i=0;i<n;i++){

            int ind=arr[i];

            if(ind<0) ind=-ind;

            if(arr[ind]<0)
                repeated=ind-1;
            else 
                arr[ind-1]=-arr[ind-1];
        }
        
        actsum=(n*(n+1))/2;
        missing=actsum-(sum-repeated);
        
        int a[2]={repeated,missing};
        
        cout<<"afaen"<<a[0]<<"jfirs"<<a[1]<<endl;
        
        int *p=a;
        return p;
        
    }
    
};


void cpc()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

int main()
{   //IOS;
    cpc();
    int t;
    cin >> t;
    while (t--) {
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