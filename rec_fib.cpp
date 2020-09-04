#include <bits/stdc++.h>
using namespace std;
void IOS() //you may ignore this IOS function, that's for my compiler setting with IO
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int main()
{
	IOS(); //comment this function IOS() if you don't know about it.
	int fib(int),n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cout<<fib(i);
	}
	return 0;
}

int fib(int n)
{
	if (n==0)
		return 0;
	else if (n==1 || n==2)
		return 1;
	else 
		return fib(n-1)+fib(n-2);
}