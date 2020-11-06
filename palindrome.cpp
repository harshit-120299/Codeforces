//https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	
	
	int isPlaindrome(string S) {
	    int len = S.length();
	    int palindrome = 1;
        for(int i = 0 ; i < (len)/2; i++){
            if(S[i] != S[len-1-i]){
                palindrome=0;
            }
        }
        return palindrome;
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends