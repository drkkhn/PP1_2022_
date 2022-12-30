#include <bits/stdc++.h>
using namespace std;
int main () {
   int a,b,c;
   cin >> a >> b >> c;
   vector <int> x;
   int i=0;
   while (i<max(a,b)) {
      i++ ;
      if (a % i == 0 and b % i==0) {
         x.push_back(i);
      }
   }sort (x.begin(),x.end(),greater<int>());
   cout << x[c-1];
   return 0;
}