#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,5,6,7,8,9};
    for(int i = 1; i<v.size();i++){
        v[i] = v[i-1] + v[i];
    }
    for(int i: v){
        cout<<i<<" ";
    }
}