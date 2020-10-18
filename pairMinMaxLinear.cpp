#include <bits/stdc++.h>
using namespace std;

struct minmaxa{
	int min;
	int max;
};


struct minmaxa getMinMax(int arr[], int len){

	struct minmaxa minmaxresults;
	minmaxresults.min=arr[0]; minmaxresults.max=arr[0];
	if (len == 1) minmaxresults.min=arr[0]; minmaxresults.max=arr[0];
	if (len == 2) 
		if (arr[0]>arr[1]){ minmaxresults.min=arr[1]; minmaxresults.max=arr[0];}
		else {minmaxresults.min=arr[0]; minmaxresults.max=arr[1];}
	for(int i = 2; i < len; i++) { 
        if (arr[i] > minmaxresults.max) minmaxresults.max = arr[i]; 
        if (arr[i] < minmaxresults.min) minmaxresults.min = arr[i]; 
    }
    return minmaxresults; 
}

void c_p_c() {
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
}


int main() {
	c_p_c();
	int arr[] = {};
	int arrlen = sizeof(arr)/sizeof(arr[0]);
	struct minmaxa minmaxresults = getMinMax(arr, arrlen);
	cout<<minmaxresults.min<<" ";
	cout<<minmaxresults.max;
}