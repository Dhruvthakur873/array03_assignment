#include<bits/stdc++.h>
using namespace std;
int arraySumPart(vector<int>v,int start,int end){
    int sum;
    for(int i = start;i<=end;i++){
        sum += v[i];
    } 
    return sum;
}
int main(){
    int start,end;
    cout<<"Enter the queries ";
    cin>>start>>end;
    vector<int>v = {1,2,3,4,5,6,7,8,9};
    cout<<arraySumPart(v,start,end);
    

}