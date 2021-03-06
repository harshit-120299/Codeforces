#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 

// Driver code 
void c_p_c() {
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
}

void heapify(int arr[],int n,int i){

	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if ( l<n && arr[l] > arr[largest] ) largest = l;

	if ( r<n && arr[r] > arr[largest] ) largest = r;

	if ( largest != i ) {
		swap( arr[i] , arr[largest] );
		heapify(arr,n,largest);
	}

}


int main() {
	c_p_c();

	int arr[] = {131,523,5,436,34,6,5,3,61,45,16,43,53,4,13};

	int arrsize = sizeof(arr)/sizeof(arr[0]); 

	for (int i = 0; i < arrsize-1 ; ++i) cout<<arr[i]<<" ";

	cout<<endl;

	int nonLeafIndex = ( arrsize / 2 ) - 1 ;

	for (int i = nonLeafIndex; i >= 0; --i) heapify(arr,arrsize,i);

	for (int i = 0; i < arrsize-1 ; ++i) cout<<arr[i]<<" ";
	

	return 0; 
}

