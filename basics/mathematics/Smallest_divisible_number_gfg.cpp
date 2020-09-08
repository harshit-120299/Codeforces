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


long long getSmallestDivNum(long long n);

int main() {

	c_p_c();
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<getSmallestDivNum(n)<<endl;
	}
	return 0;
	
}// } Driver Code Ends



long long gcd(long long a,long long b){
    if(a==0)
    return b;
    return gcd(b%a,a);
}
long long getSmallestDivNum(long long n)
{
    //Your code here
    long long s=1;
    for(int i=2;i<=n;i++){
        s=(i*s)/(gcd(i,s));
    }
    return s;
}
