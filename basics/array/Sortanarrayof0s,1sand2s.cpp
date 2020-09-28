//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T,size,val,ones,twos,zeros,sum;
	vector<int> v;
	cin>>T;
	for (int n=0;n<T;n++){
	    
	    sum=0,ones=0,twos=0,zeros=0,v.clear();
	    cin>>size;
	    
	    for(int i=0;i<size;i++){
	        cin>>val;
	        sum+=val;
	        if(val==1)
	            ones++;
	        else if(val==2)
	            twos++;
	        else if(val==0)
	            zeros++;
	    }
	    
        //zeros=sum-ones-twos;
        
	    for(int j=0;j<size;j++){
            if(j<zeros) v.push_back(0);
            else if(j<zeros+ones)   v.push_back(1);
            else if(j<zeros+ones+twos) v.push_back(2);
	    }
	    
	    for(int k=0;k<size;k++){
	        cout<<v[k]<<" ";
	    }
	    
	    cout<<"\n";
	    
	}
	
	return 0;
}