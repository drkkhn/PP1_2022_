#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    vector<int> b;
    int number;
    for(int i=0; i< a; i++){
        cin >> number;
        b.push_back(number);
    }

    string s;
    string s1;
    sort(b.begin(),b.end());
    do{
        s="";
        for(int i = 0; i < a; i++){
            s+=b[i];
        }
        
        s1=s;
        reverse(s1.begin(), s1.end());
        if(s1==s){
            for(int i = 0; i < a; i++){
                cout << b[i] << " ";
            }
            return 0;
        }

    }while(next_permutation(b.begin(), b.end()));

    cout << "Impossible";
}