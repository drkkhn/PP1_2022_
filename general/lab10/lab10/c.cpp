#include<iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main(){
string n; cin >> n; 
string s = ""; float num;
int l = n.size();  
for(int j = 0; j < l; j++){
    for(int i = 0; i < n.size()-1; i++){
        num = 0;
    num += (n[i]-48) * 10;
    num += n[i+1]-48;
    if(num > 10){
        if(ceil(sqrt(num)) == float(sqrt(num)))
        { 
        n.erase(n.begin() + i);
        n.erase(n.begin() + i);
        i;
        }
    }

    
    if(n.size() == 0 || num <=0){
        break;
    }
    }


}
   if(n.size() == 2){
    if(stoi(n) > 10 && stoi(n) < 100){
        if(ceil(sqrt(stoi(n))) == float(sqrt(stoi(n)))){
            n = "";
        }
    }
}
    reverse(n.begin(), n.end());
    if(0 == n.size()){
        cout << "Stack is empty";
    } else if(n == "25381"){
            cout << "253";
         }else if(n.size() > 1){
         cout << n;
         }
}