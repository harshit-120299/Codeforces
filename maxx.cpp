#include<iostream>
using namespace std;
int main()
{
  int first1, second1, n;
  cin>>first1>>second1>>n;
  double pri[n];
  for (int i = 0; i < n; ++i)
    cin>>pri[i];

  double max_1[n-first1+1], max_2[n-second1+1];
  double tot_first = 0.0, tot_2 = 0.0;
  
  for (int i = 0; i < first1; ++i)
    tot_first += pri[i];
  
  for (int i = 0; i < second1; ++i)
    tot_2 += pri[i];

  max_1[0] = tot_first/first1;
  max_2[0] = tot_2/second1;
  
  int j = 1;
  for (int i = first1; i < n; ++i)
  {
    tot_first += (-pri[i-first1] + pri[i]);
    max_1[j++] = tot_first/first1;
  }
  
  j = 1;
  for (int i = second1; i < n; ++i)
  {
    tot_2 += (-pri[i-second1] + pri[i]);
    max_2[j++] = tot_2/second1;
  }
  
  int up = 0, count = 0;
  if(max_1[second1-first1] > max_2[0]) up = 1;
  if(max_1[second1-first1] < max_2[0]) up = -1;


  for (int i = 1; i < n-second1+1; ++i)
  {
    if(max_1[second1-first1+i] < max_2[i] && up == 1)
    {
      count++;
      up = -1;
    }
    else if(max_1[second1-first1+i] > max_2[i] && up == -1)
    {
      count++;
      up = 1;
    }
  }
  cout<<count;
}