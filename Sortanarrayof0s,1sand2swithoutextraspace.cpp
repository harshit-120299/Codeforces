//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
#include <iostream>
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

int main()
{	//IOS;
	cpc();
	int T,size,val;
	cin>>T;
	for (int n=0;n<T;n++){
	    
	    
	    cin>>size;
	    int v[size];
	    int low=0,mid=0,high=size-1;
	    for(int i=0;i<size;i++){
	        cin>>val;
	        v[i]=val;
	    }
	    
        //zeros=sum-ones-twos;
        
	    for(int j=0;mid<=high;j++){
	       if(v[mid]==0){
	           swap(v[mid],v[low]);
	           low++;
	           mid++;
	       }
	       else if(v[mid]==1){
	           mid++;
	       }
	       else if(v[mid]==2){
	           swap(v[mid],v[high]);
    	       high--;
	       }
	    }
	    
	    for(int k=0;k<size;k++){
	        cout<<v[k]<<" ";
	    }
	    
	    cout<<"\n";
	    
	}
	
	return 0;
}