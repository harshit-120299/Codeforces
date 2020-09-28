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

	for (int i = 0; i < nums.size(); ++i){
		int ind=nums[i];
		(ind<0)?ind=-ind:ind;
		if (nums[ind]<0)
			return ind;
		else 
			nums[ind]=-nums[ind];
	}

    return 0;
}

int main(){
    c_p_c();
    vector<int> v={1,2,3,4,5,6,6};
    cout<<findDuplicate(v);
    return 0;
}