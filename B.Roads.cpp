#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	vector<pair<pair<int,int>,pair<int,int>>> llist;
	vector<pair<pair<int,int>,pair<int,int>>> rlist;


	pair<pair<int,int>,pair<int,int>> segment;
	pair<int,int> coord1;
	pair<int,int> coord2;

	int x1,y1,x2,y2;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>x1;
		cin>>y1;
		cin>>x2;
		cin>>y2;
		coord1=make_pair(x1,y1);
		coord2=make_pair(x2,y2);
		segment=make_pair(coord1,coord2);
		llist.push_back(segment);
	}

	int start;
	for(int j=0;j<T;j++)
	{
		
	}

	return 0;
}