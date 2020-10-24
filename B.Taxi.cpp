#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T,g_count;
	int cars=0, twos=0,threes=0,ones=0,combs1_3;
	cin>>T;
	for (int i=0;i<T;i++)
	{
		cin>>g_count;
		if (g_count==4)
			++cars;
		else if (g_count==2)
			++twos;
		else if (g_count==3)
			++threes;
		else 
			++ones;
	}
	cars=cars+(twos/2);
	if (twos%2!=0)
		twos=1;
	else 
		twos=0;
	combs1_3= min(threes,ones);
	cars=cars+combs1_3;
	ones=ones-combs1_3;
	threes=threes-combs1_3;
	cars=cars+threes;
	cars=cars+(ones/4);
	ones=ones%4;
	if(ones+(2*twos)>4)
	{
		cars=cars+2;
	}

	else if(ones+(2*twos)<=4 && ones+(2*twos)>0)
	{
		cars=cars+1;
	}


	cout<<cars;
	return 0;
}
