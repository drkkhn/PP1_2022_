#include <bits/stdc++.h>
using namespace std;
int main () {
   int n ; cin >> n;
   string s;
   cin >> s;
   for (int i=0;i<s.size();i++) {
      if ( s[i] >= 97 and s[i] <= 122) {int val = s[i]-'a' ;
      val = (val + n) % 26 ;
      s[i] = 'a' + val ; }
      if (s[i] >= 65 and s[i] <= 90) {int val = s[i]-'A' ;
      val = (val + n) % 26 ;
      s[i] = 'A' + val ; }
} cout <<  s  << '\n' ;
return 0;
}