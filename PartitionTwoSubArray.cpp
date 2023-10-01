#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {-1,0,2,2,3,-4};
    int totalSum = 0;

    for(int i =0;i<v.size();i++){
        totalSum +=v[i];
    }
    int preFixSum = 0;
    int suffixSum = 0;
    for(int i = 0;i<v.size();i++){
        preFixSum+=v[i];
        suffixSum = totalSum - preFixSum;
        if(preFixSum == suffixSum){
            cout<<"The subarray from 0 to "<<i<<" and from "<<i+1<< " to "<<v.size()-1<<"are equal";
        }
    }
}