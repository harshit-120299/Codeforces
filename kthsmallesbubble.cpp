//https://practice.geeksforgeeks.org/problems/kth-smallest-element/0
//Kth smallest element
#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 

// Driver code 
void c_p_c() {
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
}

int main() {
	c_p_c();
	int t, k;
	cin>>t;

	for (int q = 0; q < t; ++q)	{
		cin>>k;
		int arr[] = { 1000, 11, 4453, 1, 330, 3000, -134, 3523, 4, 34, 5, 335, 53, 233, 5 }; 
		int arr_size = sizeof(arr)/sizeof(arr[0]);
		
		for (int i = 0; i < arr_size; ++i){
			for (int j = arr_size-1; j >= i+1; --j){
				if(arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
			}
		}

		cout<<arr[k-1]<<endl;

	}

	return 0; 
}

