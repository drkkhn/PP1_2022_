#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin >> s;
    int cnt = 0;
    map <char , int > mp;
    for (int i=0;i<s.size();i++) {
     mp[s[i]]++;
    } for (auto i:mp) {
        if (i.second % 2 ==1) cnt++;
    } if (cnt == 1 || cnt == 0) cout << "ZA WARUDO TOKI WO TOMARE" ;
    else cout << "JOJO" ;
} 