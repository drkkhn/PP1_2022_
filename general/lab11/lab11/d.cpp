#include <bits/stdc++.h>
using namespace std;
int main () {
    bool check = true ;
    int n , m;
    cin >> n >> m ;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >> arr[i][j];
        } 
    } if (n+m>= 4)for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){ 
            if (arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i+1][j+1]) {
                check = false;
                cout << "NO" ;
                return 0;
            }
        }} if (check==true) {cout << "YES" ;}
        return 0;
}