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

	sort(nums.begin(),nums.end());

	for(int i=0;i<nums.size()-1;i++){
	    if(nums[i]==nums[i+1])
	        return nums[i];
	}
	return 0;
}

int main(){
    c_p_c();
    vector<int> v={1,2,3,4,5,6,2};
    cout<<findDuplicate(v);
    return 0;
}