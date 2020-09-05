//here's the template file for github 
#include <bits/stdc++.h>
using namespace std;
//typedef IOS ios::sync_with_stdio(false);
//typedef endl "/n";
void c_p_c()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int fib(int n)
{
	if(n<2)
		return 1;
	int x=fib(n-1); 
	int y=fib(n-2);
	return x+y;
}	

int main()
{	//IOS;
	c_p_c();
	cout<<"Enter len of fibonacci series"<<endl;
	int len;cin>>len;
	for (int i = 0; i < len; ++i)
	{
		cout<<fib(i)<<" ";	
	}
	return 0;
}