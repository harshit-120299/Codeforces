#include <bits/stdc++.h>
using namespace std;
void IOS()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int main()
{
	IOS();
	string s;
	cin>>s;
	int a;
	char x;
	string bts;
	char dot='.';
	for(int i=0;i<s.length();i++)
	{
		x=s[i];

		if( x=='a' || x=='A' || x=='e' || x=='E' || x=='i' || x=='I' || x=='o' || x=='O' || x=='u' || x=='U' || x=='y' || x=='Y')
		{
			s.erase(i,1);
			--i;
		}

		else if(int(x)<97)
		{
			bts=string(1,char(int(x)+32));
			s.replace(i,1,bts);
			s.insert(i,".");
			++i;
		}

		else	
		{
			s.insert(i,".");
			++i;
		}
	}
	cout<<s;
	return 0;
}