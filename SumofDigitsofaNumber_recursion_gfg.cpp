//Initial Template for C++
#include <iostream>
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

// Complete this function
int sumOfDigits(int n)
{
    if(n<=0)return 0;
    return sumOfDigits(n/10)+n%10;
}

// { Driver Code Starts.


int main() {
	c_p_c();
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    
	    cout<<sumOfDigits(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends