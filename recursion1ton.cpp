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

//cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

void c_p_c() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}



void print1ton(int k,int n){
    if(k>n) return;
    cout<<k<<endl; k++;
    return print1ton(k,n);
}


void printnto1(int n){
    if (n<1) return;
    cout<<n<<endl;
    return printnto1(n-1);
}   

void printnto1r(int n){
    if (n<1) return;
    printnto1r(n-1);
    cout<<n<<endl;
}   

int main() {
    IOS;
    c_p_c();
    // Code starts from here:
    int n; cin >> n;
    //print1ton(1,n);
    // printnto1(n);
    printnto1r(n);


    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

}
