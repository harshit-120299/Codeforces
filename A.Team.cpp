#include <iostream>
using namespace std;
int main()
{
	int T,P,To,V;
	cin >> T;
	int total=0;
	for (int i=0;i<T;i++)
	{
		cin>>P>>To>>V;
		if ((P+To+V)>1)
		{
			++total;
		}
	}
	cout<<total;
	return 0;
}
