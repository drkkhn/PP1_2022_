#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int sizeofvector(int n) {
   int sze=0;
   while (n!=0) {
      sze += n;
      n--;
   } return sze;
}
int main () {
int n ; cin>> n;
vector <int> v(sizeofvector(n));
int put = 0 ;
for (int i=0;i<=n;i++) {
   fill(v.begin() + put , v.begin() + i  + put, i) ;
   put += i ;
} for (int i=0;i<v.size();i++) {
   cout << v[i] << " " ;
} return 0 ;
}