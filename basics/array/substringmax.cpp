//here's the template file for codeforces 
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;
//typedef IOS;
void cpc()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int main()
{	//IOS;
	cpc();
	unordered_map<char,int> map;
	int i=0,max=0;
	char arr[]={'a','b','c','a','d','e','f'};
	int len= sizeof arr/sizeof arr[0];
	for (int j = 0; j < len; ++j)
	{

		if(abs(i-j)+1 > max) max=abs(i-j)+1;

		if (map.find((char)arr[j])!=map.end())
		{	
			i++;
			map.erase(map.find((char)arr[j]));
		}
		else
			map.insert({(char)arr[i],i});
	}
	std::cout<<max;
	return 0;
}