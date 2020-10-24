void reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        reverse(str,len);
        cout<<str;
        cout<<endl;
    }
        return 0;
}
// } Driver Code Ends


void reverse(char *str, int len)
{
    stack <int> s;
    for(int x=0; x<len; x++){
        s.push(str[x]);
    }
    for(int x=0; x<len; x++){
        str[x]=s.top();
        s.pop();
    }
    
}