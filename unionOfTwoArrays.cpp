//https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0
//union of two arrays
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#include <unordered_map>
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
#define INF 0x7f7f7f7f7f7f7f7f
#define MOD 1000000007
const long double pi=3.1415926535897932384626433832; 

void c_p_c() {
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
}


int main() {
    IOS;
    c_p_c();
    
    // Code starts from here:
    int t; cin >> t;
    int  size1, size2; 
    while (t--) {
        
        set<int> set1;
        
        cin>>size1; cin>>size2;

        int arr1[size1], arr2[size2];

        for (int i = 0; i < size1; ++i)     cin>>arr1[i];

        for (int i = 0; i < size2; ++i)     cin>>arr2[i];
        
        for (int i = 0; i < size1; ++i) set1.insert(arr1[i]);  
        
        for (int i = 0; i < size2; ++i) set1.insert(arr2[i]);               
    
        //for (auto i = set1.begin(); i!=set1.end(); ++i) cout<<*i<<" ";         
        cout<<set1.size();
        
        cout<<endl;
    }


    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

}
