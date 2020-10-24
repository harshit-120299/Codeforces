#include <bits/stdc++.h>
using namespace std;
void IOS()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int main() {
	IOS();

	int total;
    cin>>total;
    if ((total-2)%2==0)
        printf("YES");
    else
    	printf("NO");
    return 0;
}