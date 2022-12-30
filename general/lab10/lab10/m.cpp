#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
 int a, n; cin >> a >> n; vector<int> v(a), v1(n), res; 
 
 for (int i = 0; i < a + n; i++) i < a ? cin >> v[i] : cin >> v1[i - a]; 
 
 a = unique(begin(v), end(v)) - begin(v); 
 n = unique(begin(v1), end(v1)) - begin(v1); 
 
 for (int i = 0; i < max(a,n); i++)  
 { 
  if(i<a) res.push_back(v[i]); 
 
  if(i<n) res.push_back(v1[i]); 
 } 
 
 int k = unique(begin(res), end(res)) - res.begin(); 
 
 for (int i = 0; i < k; i++) cout << res[i] << " "; 
}