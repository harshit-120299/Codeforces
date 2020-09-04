#include <iostream>
using namespace std;
int gcd(int a,int b) {
   int temp;
   while(b > 0) {
      temp = b;
      b = a % b;
      a = temp;
   }
   return a;
}
int main() {
   int a[] = {4, 10, 16, 14};
   int n = 4;
   int r = a[0];
   for(int i=1; i<n; i++) {
      r = gcd(r, a[i]);
   }
   cout << r << endl;
   return 0;
}