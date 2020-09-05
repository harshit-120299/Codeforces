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


int fact(int n)
{
	if(n==1)
		return 1;
	return n*fact(n-1);
}

int main()
{	//IOS;
	c_p_c();
	cout<<fact(5);
	return 0;
}