//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends



class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        unordered_map<int,int> v;
        unordered_map<int,int> v1;
        for(int i=0;i<n;i++){
            v[arr[i]]++;
        }
        
        for(int i=1;i<=n;i++){
            v1[i]++;
        }
        
        int missing;
        int repeated;
        
        for(auto p=v.begin();p!=v.end();p++){
            if(p->second>1)  {repeated=(p->first); v1[p->first]--;} 
            else if(p->second>0)  v1[p->first]--;
        }
        
        
        
        for(auto p=v1.begin();p!=v1.end();p++)
            if(p->second>0)  missing=p->first;
        

        int a[3]={repeated,missing};
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
{	//IOS;
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