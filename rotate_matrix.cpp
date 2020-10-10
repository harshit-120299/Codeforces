#include <bits/stdc++.h>
using namespace std;

void c_p_c() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


int main() {
    c_p_c();
    int val,size;
    cin>>size;

    int c=size,r=size;
    int matrix[r][c];
    for (int i = 0; i < r; ++i)
    {	for (int j = 0; j < c; ++j)
    	{
    		cin>>val;
    		matrix[i][j]=val;
    	}
    }

//2<->1
    for (int i = 1; i < r-1; ++i)
    {
    		swap(matrix[r-1][i],matrix[i][0]);
    }
//2<->3
    for (int i = 1; i < r-1; ++i){
    		swap(matrix[r-1-i][c-1],matrix[i][0]);
    }

//3<->4
    for (int i = 1; i < r-1; ++i){
    		swap(matrix[r-1-i][0],matrix[0][i]);
    }
//1<->2
    swap(matrix[0][0],matrix[r-1][0]);
//1<->3
    swap(matrix[0][0],matrix[r-1][c-1]);
//1<->4
    swap(matrix[0][0],matrix[0][c-1]);


//print all
    for (int i = 0; i < r; ++i){
    	for (int j = 0; j < c; ++j)	cout<<matrix[i][j]<<" ";
    	cout<<endl;
    }


    return 0;
}










// for (int k = 1; k< r/2; ++k){
// //2<->1
//     for (int i = k; i < r-1; ++i)
//     {
//     		int temp=matrix[r-1][i];
//     		matrix[r-1][i]=matrix[i][0+k-1];
//     		matrix[i][0+k-1]=temp;
//     }
// //2<->3
//     for (int i = k; i < r-1; ++i){
//     		int temp=matrix[i][0+k-1];
//     		matrix[i][0+k-1]=matrix[r-1-i][c-1];
//     		matrix[r-1-i][c-1]=temp;
//     }

// //3<->4
//     for (int i = k; i < r-1; ++i){
//     		int temp=matrix[r-1-i][0+k-1];
//     		matrix[r-1-i][0+k-1]=matrix[0+k-1][i];
//     		matrix[0+k-1][i]=temp;
//     }
// }