	#include <iostream>
	#include <bits/stdc++.h>
	using namespace std;
	int main()
	{	
		int T,len;
		string S;
		cin>>T;
		for (int x=0; x<T; x++)
		{
			cin>>S;
			len=S.length();
			if (len>10)	
				cout<<S[0]<<len-2<<S[len-1]<<"\n";
			else 
				cout<<S<<"\n";

		}
		return 0;
	}