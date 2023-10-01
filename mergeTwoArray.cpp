#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr1  = {1,2,3};
    vector<int>arr2  = {4,5,6};
    vector<int>arr;
    int i,j,k;
    i = j = k = 0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]){
            arr[k] = arr1[i];
            k++;
            i++;
        }else{
            arr[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<arr1.size()){
        arr[k] = arr[i];
        k++;
        i++;
    }
    while(j<arr2.size()){
        arr[k] = arr2[j];
        k++;
        j++;
    }
    for(int l:arr){
        cout<<l<< " ";
    }
}