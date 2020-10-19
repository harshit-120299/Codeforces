//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void c_p_c() {
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
}


int main() {
    IOS;
    c_p_c();

    // Code starts from here:
    int arr[] = { -12, 11, 4634, 436346, -13, 463, -5, 6, -7, 5, -3, 4543,33, -6 };
    int size = sizeof(arr)/sizeof(arr[0]);
    int high = size-1, low = 0;

    while ( low <= high ) {
    	if ( arr[low]<0 ){
    		low++;
    	}
    	else {
    		swap( arr[low], arr[high] );
    		high--;
    	}
    }

    for(int i=0; i<size; i++) cout<<arr[i]<<" ";
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

}
