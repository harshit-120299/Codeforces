//here's the template file for codeforces 
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//typedef IOS;
void c_p_c()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

int findDuplicate(vector<int>& nums) {

    unordered_map<int,int> vectormap;

    for(int i=0;i<=nums.size()-1;i++){
        vectormap[nums[i]]++;
    }

    for(auto p=vectormap.begin();p!=vectormap.end();p++){
        if(p->second>1) return p->first;
    }
    return 0;
}

int main(){
    c_p_c();
    vector<int> v={1,2,3,4,5,6,6};
    cout<<findDuplicate(v);
    return 0;
}