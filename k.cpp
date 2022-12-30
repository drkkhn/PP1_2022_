#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x){
    if(x < 0) x *= -1;
    if(x == 2 || x == 3) return true;
    if(x == 1 || x == 0) return false;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}
int main () {
   int n; cin >> n;
   vector <int> a;
   int cnt=0;
   for(int i=0;i<n;i++) {
   int x ;
   cin >> x; 
   a.push_back(abs(x));
} cout << count_if(a.begin(),a.end(),isPrime);
}