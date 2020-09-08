//here's the template file for github 
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

void asc_rec(int n)
{
	if (n==0)
	{
		return;
	}
	asc_rec(n-1);
	cout<<n<<" ";	
}

int main()
{	//IOS;
	c_p_c();
	asc_rec(6);
	return 0;
}