//https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0
//Cyclically rotate an array by one

#include <iostream>
using namespace std;

int main() {
    
	int t, size;
	
	cin >> t;
	
	for(int i = 0; i < t; i++){
	    
	    cin>>size; int arr[size];
	    
	    for(int j=0; j<size; j++)	cin>>arr[j];
	    
	    int lastval = arr[size-1];
	    
	    for(int j=size-1; j >= 1; j--) arr[j]=arr[j-1];
	    
	    arr[0] = lastval;
	    
	    for(int j = 0; j < size; j++)   cout<<arr[j]<<" ";
	    
	    cout<<endl;
	}
	return 0;
}