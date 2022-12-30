#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    bool check = false ;
    cin >> n;
    set <char> st;
    map <char,int>mp;
    for (int i=0;i<n;i++){
        string str;
        cin >> str;
        for (int j=0;j<str.size();j++) {
            st.insert(str[j]);
        } for (auto ip :st) mp[ip]++;
        st.clear();
    } for (auto i:mp) {
        if (i.second >= n) { check = true ;
            cout << i.first << " " ;
        }
    } if (check == false) cout << "NO COMMON CHARACTERS" ;
    return 0;
}   