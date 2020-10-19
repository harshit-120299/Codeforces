#include <bits/stdc++.h>
using namespace std;

void c_p_c() {
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
}

int main() {
	int T, size, val;
	cin >> T;
	
	for ( int n = 0; n < T; n++ ) {
	    
	    cin >> size;
	    int v[size];
	    
	    for (int i=0; i < size; i++) {
	        cin >> val;
	        v[i] = val;
        }
        
        // for ( int i = 0; i < size; i++ ) 
        // 	cout << v[i] << " ";
        
        int mid = 0, low = 0, high = size-1;
        
        while ( mid <= high ) {
            if( v[mid] == 0 ) {
                   swap( v[low], v[mid] );
                   low++;mid++;
            }
            else if( v[mid] == 2 ) {
                   swap( v[high], v[mid] );
                   high--;
            }
            else if( v[mid] == 1 ) {
                   mid++;
            }
            
        }
        
        for (int i=0; i < size; i++) cout<<v[i]<<" ";
        cout<<endl;
	}
	
	return 0;
}