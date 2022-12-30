#include <iostream>
using namespace std;
void toBinary(int n) {
   if (n==0) return; 
   toBinary(n/2);
   cout << n%2;
}
int main () {
   int n;
   cin >> n;
   int a[n];
   for (int i=0;i<n;i++) {
       cin >> a[i];
   }for(int i=0;i<n;i++) {
      toBinary(a[i]);
      cout << '\n';
   }
}