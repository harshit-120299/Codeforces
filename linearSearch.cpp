#include <bits/stdc++.h>
using namespace std;

void c_p_c() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


int main() {
    c_p_c();
    // Code starts from here:
    int arr[]={2,132,46,34,6,45,7,56,8,67,9,8978,4,534};
    int search = 534, index = -1;
    int arrlen=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i < arrlen ; i++){
        if(arr[i]==search){
            cout<<"found search at "<<i;
            return 0;
        }
    }
    
    cout<<"key not present";
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}