#include <iostream>
using namespace std;
int main()
{
	long long int n,m,a,x,y;
	unsigned long long int flagstones;
	cin>>n>>m>>a;
	x=(m/a)*(n/a);

	if (n%a!=0 && n>a)
	{
		x=x+m/a;
	}

	if (m%a!=0 && m>a)
	{
		x=x+n/a;
	}

	if (m%a!=0 && m>a)
	{
		if (n%a!=0 && n>a)
		{
			++x;
		}
	}



	flagstones=x;

	if (flagstones<1)
		flagstones++; 
	cout<<flagstones;

	return 0;
}