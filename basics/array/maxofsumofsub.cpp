//https://practice.geeksforgeeks.org/problems/maximum-sub-array5443/1
//https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
//max sum of substring arr 0(n^3) complexity

//here's the template file for codeforces 
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
	int arr[]={1,2,3,4,-5,6,-7,8};
	int arrlen = sizeof arr / sizeof arr[0];
	int max=arr[0];
	int sum=0;
	for (int i = 0; i < arrlen ; ++i)
	{
		for (int j = i;j<arrlen; ++j)
		{   
			sum=0;
			for (int k = i; k<=j; ++k) sum=sum+arr[k];
			if (sum>max) max=sum;
		}
	}
	cout<<max;
	return 0;
}