#include <bits/stdc++.h>
using namespace std;

int main(){
vector<int> v, ans;
int n, m; 
cin >> n >> m;
for(int i=0;i<n;i++){
    int x; cin >> x;
    v.push_back(x);
}
ans = v;
reverse(ans.begin(),ans.end());
rotate(ans.begin(), ans.end()-m, ans.end());
for(int i=0;i<ans.size();i++) 
cout << ans[i] << " ";
}