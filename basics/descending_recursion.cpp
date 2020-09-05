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

void desc_rec(int n)
{
	if (n==1)
	{
		cout<<n<<" ";
		return;
	}
	cout<<n<<" ";
	desc_rec(n-1);	
}

int main()
{	//IOS;
	c_p_c();
	desc_rec(6);
	return 0;
}