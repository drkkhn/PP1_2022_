#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string> 
using namespace std;


int main(){
    int n, i = 1;
    long long c = 1;
    cin >> n;
    cout << 1 << " ";
    while(i <= n){
        for(int j = 0; j < i; j++){
             c *= i;
        }
        cout << c << " ";
        i++;
        c = 1;
    }
}