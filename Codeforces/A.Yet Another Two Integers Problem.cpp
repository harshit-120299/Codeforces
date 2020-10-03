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
	int T;
	cin>>T;
	for (int i = 0; i < T; ++i)
	{
	int a,b;
	cin>>a>>b;
	int moves=0;
	int diff=a-b;

	if(diff<0)
		diff=-diff;

	moves=diff/10;

	if (diff%10!=0)
	{
		moves++;
	}

	cout<<moves<<"\n";

	}
return 0;
}