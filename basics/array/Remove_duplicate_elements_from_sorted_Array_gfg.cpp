//here's the template file for codeforces
//basic array
//https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1/?track=ppc-arrays&batchId=221 
#include <bits/stdc++.h>
using namespace std;
//typedef IOS;
void c_p_c()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

int remove_duplicate(int [],int );

int main()
{   //IOS;
    c_p_c();
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }

    int n = remove_duplicate(a,sizeof(a)/sizeof(a[0]));

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function */
int remove_duplicate(int A[],int N)
{   
    if(N>1){
        int i=0;
        for(int x=1;x<N;x++){
            if(A[x]>A[i]){
                i++;
                A[i]=A[x];
            }
        }
        return i+1;
    }
    else 
        return N;
}