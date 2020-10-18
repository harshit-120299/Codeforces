#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int t; string s;
	cin>>t;
	for( int i = 0; i < t; ++i) {
	    cin>>s;
	    for(int j = 0; j < s.length()/2; j++){
            swap(s[j],s[(s.length())-1-j]);
	    }
	    cout<<s<<"\n";
	}
	return 0;
}