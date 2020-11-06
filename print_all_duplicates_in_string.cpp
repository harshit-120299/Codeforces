//https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    
    string str="aabcdefghhiijklssmnopqrrssttuvwxyz";

    int len = str.length();

    int count[256] = {0};

    for(int i=0; i < len; i++)    	count[str[i]]++;

    for(int i=0; i < 256; i++) if (count[i]>1) cout<<char(i)<<":"<<count[i]<<" ";

    return 0; 
} 
