#include <bits/stdc++.h>
using namespace std;
int main () {
   int cnt , b;
   cin >> cnt >> b;
   int day ; 
   int sum = 0;
   map <string,double> mp;
    for (int i=0;i<b;i++) {
      string s ; double n ;
      cin >> s >> n;
      sum += n;
      if(!mp[s]) mp[s] = n;
        else mp[s] += n;
   }
   for (int i=0;i<cnt-1;i++) { 
      cin >> day;
      for (int j=0;j<day;j++){
      string s ; double n ;
      cin >> s >> n;
      sum += n;
      if(!mp[s]) mp[s] = n;
        else mp[s] += n;} day = 0;
   }
   for (auto i : mp) {
      cout << i.first << " " << (i.second * 100)  / sum << endl ;  
   } 
}