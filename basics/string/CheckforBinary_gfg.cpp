//Basic Strings
//https://practice.geeksforgeeks.org/problem_submissions.php?pid=700133&isSolved=ALL&lang=ALL&user=Self

#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str);

// Driver program to test above functions
int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}
// } Driver Code Ends


// Return true if str is binary, else false
bool isBinary(string str)
{
   // Your code here
   bool bin=true;
    for(int x=0; x<str.length(); x++){
        if(str[x]!='1' && str[x]!='0'){
            bin=false;
            break;
        }
    }
    return bin;
}