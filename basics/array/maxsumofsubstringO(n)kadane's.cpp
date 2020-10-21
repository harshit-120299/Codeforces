//https://practice.geeksforgeeks.org/problems/maximum-sub-array5443/1
//https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
//max sum of substring arr 0(n) complexity
#include <bits/stdc++.h>
using namespace std;

//typedef IOS;
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
	int T;
	cin>>T;
	for(int x=0;x<T;x++){
	    int S;
	    cin>>S;
	    int arr[S];
	    int val;
	    for(int l=0;l<S;l++){
	        cin>>val;
	        arr[l]=val;
	    }
    	int arrlen = sizeof arr / sizeof arr[0];
    	int max=arr[0];
    	int sum=0;
    	for (int i = 0; i < arrlen ; ++i)
    	{
    		sum+=arr[i];
    		if(sum>max)max=sum;
    		if(sum<0)sum=0;
    	}
    	cout<<max<<endl;
	}
	return 0;
}