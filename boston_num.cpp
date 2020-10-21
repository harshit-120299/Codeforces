#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void c_p_c() {
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
}


int main() {
    //IOS; c_p_c();

    int val; cin>>val;

    int sum=0, act_val=val;

    for (int i = 2; val>1 ; ++i) {

        while(val%i==0){
            val=val/i;
            int j=i;
            while(j>0){
                sum=sum+(j%10);
                j=j/10;
            }
        }

    }

    int act_sum=0;
    while (act_val){
        act_sum=act_sum+act_val%10;
        act_val=act_val/10;
    }

    if(act_sum==sum) cout<<1;
    else cout<<0;
    
    return 0;
}