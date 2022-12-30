#include<iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int main(){
    int n; cin >> n;
    vector< vector <int> > v;
    int n2 = n; int num;
    for(int m = 0; m < n; m++){
         cin >> num;
     
            vector<int>row;
            for (int j = 0; j < num; j++)
            {
               int val; cin >> val;
               row.push_back(val);
            }
            v.push_back(row);
        
    }
    

     for(int i = 0; i < v.size(); i++){
        int sum = 0;
        for (int j = 0; j < v[i].size(); j++)
        {
            sum += v[i][j]; 
        }
        
        v[i].push_back(sum);
    }
    int tmp;
        for(int i = 0; i < v.size(); i++){
        
           rotate(v[i].begin(), v[i].begin()+v[i].size()-1, v[i].end());
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        for (int j = 1; j < v[i].size(); j++)
        {
            cout << v[i][j] << ' ';
            
        }cout << endl;
        
    }
}