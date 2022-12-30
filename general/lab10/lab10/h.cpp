#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    vector<int>::iterator it;

    for(size_t i=0;i<v.size();i++){
        for(size_t j=0;j<v.size();j++){
            if(v[i]==v[j] && i!=j){
                v.erase(v.begin()+j);
                j--;
            }
        }
    }

    do{

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }       

        cout<<endl;
    }while(next_permutation(v.begin(),v.end()));
    return 0;
}