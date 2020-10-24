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
	int F;
	int x,y,z,sumx=0,sumy=0,sumz=0;
	cin>>F;
	for (int i=0;i<F;i++)
	{
		cin>>x;
		cin>>y;
		cin>>z;
		sumx=sumx+x;
		sumy=sumy+y;
		sumz=sumz+z;

	}
	if (sumx==0 && sumy==0 && sumz==0)
	{
		cout<<"YES";
	}
	else 
		cout<<"NO";
	return 0;
}