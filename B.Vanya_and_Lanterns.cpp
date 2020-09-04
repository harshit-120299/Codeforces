#include <bits/stdc++.h> 
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	int n,len;
	float max_dist=0;

	cin>>n;
	cin>>len;

	int nlist[n],temp;
	
	for (int i=0;i<n;++i)
	{
			cin>>nlist[i];
	}

	sort(nlist,nlist+n);

	for (int i=0;i<n-1;++i)
	{
			temp=nlist[i+1]-nlist[i];
			if (temp>max_dist)
			{
				max_dist=temp;
			}
			
	}

	max_dist=max_dist/2;

	if(nlist[0]!=0 && nlist[0]>max_dist)
		max_dist=nlist[0];

	if (nlist[n-1]!=len && len-nlist[n-1]>max_dist)
		max_dist=len-nlist[n-1];

	cout << fixed << setprecision(10) << max_dist << endl;
	
	return 0;
}
