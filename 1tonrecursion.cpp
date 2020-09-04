#include <bits/stdc++.h>
using namespace std;
//typedef IOS
void c_p_c()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

void pat(int n)
{
	if (n==0)
		return;
	else
		pat(n-1);
	cout<<n;		
}

int main()
{
	c_p_c();
	pat(4);
	return 0;
}