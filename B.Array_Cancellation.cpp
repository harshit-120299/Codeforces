//here's the template file for codeforces 
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

int main()
{	//IOS;
	c_p_c();
	int t,n,val;
	cin>>t;
	for (int l = 0; l < t; ++l)
	{
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>val;
			arr[i]=val;
			
		}
		cout<<"\n";
	}
	return 0;
