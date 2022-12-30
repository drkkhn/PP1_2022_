#include <bits/stdc++.h>
using namespace std;
int main () {
   int n;
   cin >> n;
   vector <int> v1;
   vector <int> v2;
   for(int i=0;i<n;i++){
   int element; cin >> element;
   v1.push_back(element);
   v2.push_back(element);
   } reverse(v2.begin(),v2.end());
   for (int i=0;i<n;i++){
   if (v1[i]==v2[i]) {
      cout << "OK" << '\n';
   } else {
   cout << "Instead of " << v1[i] << " here was " << v2[i] << '\n';}
} return 0;
}