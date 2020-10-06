//https://practice.geeksforgeeks.org/problems/overlapping-intervals/0
//here's the template file for codeforces 
#include <bits/stdc++.h>
using namespace std;
//typedef IOS;
void cpc()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int main() {
	//code
	cpc();
	vector<int> v;
	vector <pair<int,int>> v1;

	int T, size,val;
	
	cin>>T;
	for (int i=0;i<T;i++){
	    cin>>size;
	    v.clear();
	    v1.clear();
	    for(int j=0;j<size*2;j++){
	        cin>>val;
	        v.push_back(val);
		}


		for (int i=0;i<size*2;i++){
	    	if(i%2==0) 
	    		v1.push_back(make_pair(v[i],v[(i)+1])); 
	    }
	    
	    sort(v1.begin(),v1.end());

	    for (int i=0;i<v1.size()-1;i++){
	    	if (v1[i].second>=v1[i+1].first){

	    		v1[i].second=max(v1[i].second,v1[i+1].second);
	    		v1.erase(v1.begin()+i+1);
	    		--i;
	    	}
	    }

	    for (int i=0;i<v1.size();i++){
			cout<<v1[i].first<<" "<<v1[i].second<<" ";
	    }

	    cout<<endl;
	}
	    
	
    
	return 0;
}