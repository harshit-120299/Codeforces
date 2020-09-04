#include <bits/stdc++.h>
using namespace std;
void IOS()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int main()
{
	IOS();
	vector<int> v;
	int n,len,abc,count=0;
	cin>>n;len=n;

	for(int x=0;x<3;x++)
	{	
		cin>>abc;
		v.push_back(abc);
	}

	sort(v.begin(), v.end());
	

	for(int x=0;x<3;x++)
	{	
		count=count+n/v[x];
		n=n%v[x];
	}

	bool flag=false;
	if (n!=0)
	{
		for(int x=n/a; x>=0; x--) 
		{

		    for(int y=(n-x*a)/b; y>=0; y--) 
		    {

		        for(int z=(n-x*a-y*b)/c==0) 
		        {
		        	
		        }
		    }
		}
	}

	cout<<count;
	return 0;
}