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
		if (n%2==0)
		{
			int arr[n];
			for (int i = 0; i < n; ++i)
			{
				cin>>val;
				arr[i]=val;
				if (i%2==1 && i>=1)
				{
					swap(arr[i-1],arr[i]);
				}
			}
			for (int i = 0; i < n; ++i)
			{
				cout<<arr[i]<<" ";
			}
		}
		else
		{
			int p[n];

			for(int i=0; i<n; i++) 
				cin >> p[i];

			for(int i=n-1; i>=0; i--) 
				cout << p[i] << " ";
		
		}
		cout<<"\n";
	}
	return 0;
}