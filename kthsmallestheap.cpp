//https://practice.geeksforgeeks.org/problems/kth-smallest-element/0
//kth-smallest-element
#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 

// Driver code 
void c_p_c() {
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
}

void heapify(int arr[],int n,int i){

	int smallest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if ( l<n && arr[l] < arr[smallest] ) smallest = l;

	if ( r<n && arr[r] < arr[smallest] ) smallest = r;

	if ( smallest != i ) {
		swap( arr[i] , arr[smallest] );
		heapify(arr,n,smallest);
	}

}

int kElement( int arr[], int n, int k ) {

	for ( int i=0; i < k; i++ ) {
		swap( arr[0], arr[n-1] );
		heapify(arr,--n,0);
	}

	return arr[n];
}

int main() {
	
	int t, k, arr_size, val;
	
	cin>>t;

	for (int q = 0; q < t; ++q)	{
	    
		cin>>arr_size;
		
		int arr[arr_size];
		
		for(int i=0; i<arr_size; i++){
		    cin>>val;
		    arr[i]=val;
		}
		
		cin>>k;
    
    	int nonLeafIndex = ( arr_size / 2 ) - 1 ;
    
    	for (int i = nonLeafIndex; i >= 0; --i) heapify(arr,arr_size,i); //heapfiy the arr
    
    	//for (int i = 0; i < arrsize-1 ; ++i) cout<<arr[i]<<" "; //print heap
    
    	cout << kElement(arr, arr_size, k)<<endl;
		
	}

	return 0; 
}

