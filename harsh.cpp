#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int x;
    int i=0;
    while(true)
    {       
        if (cin.get()=='\n') 
            break;
        else
            cin>>x;
        a[i]=x;
        ++i;
    }
    for (int j=0;j<i;j++)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}