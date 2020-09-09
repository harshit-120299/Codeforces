#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
void c_p_c()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}


// The main function that returns value of a given postfix expression
int evaluatePostfix(string &str){
    stack<int> s;
    int a,b;
    for(int x=0; x<str.length(); ++x){
        if(str[x]=='/'){
            b=s.top();s.pop();
            a=s.top();s.pop();
            s.push(a/b);
        }
        else if(str[x]=='*'){
            b=s.top();s.pop();
            a=s.top();s.pop();
            s.push(a*b);
        }
        else if(str[x]=='+'){
            b=s.top();s.pop();
            a=s.top();s.pop();
            s.push(a+b);
        }
        else if(str[x]=='-'){
            b=s.top();s.pop();
            a=s.top();s.pop();
            s.push(a-b);
        }
        else
            s.push(str[x]-'0');
    }
    return s.top();
}



// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    c_p_c();
    int t;
    cin>>t;
    //cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string str;
        cin>>str;
    
    cout<<evaluatePostfix(str)<<endl;
    }
    return 0;
}
  // } Driver Code Ends