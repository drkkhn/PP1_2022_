#include <bits/stdc++.h>
using namespace std;
int main () {
   int size ;
   cin >> size;
   set <int> st;
   for (int i=0;i<size;i++) {
      int element;
      cin >> element;
      st.insert(element);
   } if (st.size()==size) cout << "YES";
   else cout << "NO";
   return 0;
}