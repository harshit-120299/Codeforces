//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

//Complete this function
typedef long long ll;
ll fibonacci(int n)
{
    if(n<1)
        return 0;
    else if(n<=2)
        return 1;
    else return fibonacci(n-2)+fibonacci(n-1);
}


// { Driver Code Starts.



int main() {
	int T;
	cin>>T;
	while (T--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<fibonacci(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends