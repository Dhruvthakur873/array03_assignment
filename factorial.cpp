//Find the factorial of a large number
#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&v,int start ,int end){
    for(int i=start,j=end;i<=j;i++,j--){
        swap(v[i],v[j]);
    }
    for(int i:v){
        cout<<i;
    }
}
void factorial_of_larger_number(vector<int>&v,int num){
    
    int size=1;
    for(int i =2;i<=num;i++){
        int carry=0;
        for(int j=0;j<size;j++){
            int product = v[j]*i+carry;
            v[j]= product%10;
            carry = product/10;

        }
        while(carry>0){
            v.push_back(carry);
            carry/=10;
            size++;
        }

    }
    reverse(v,0,v.size()-1);
}
int main(){
    int num;
    cout<<"Enter the number whose factorial you want: ";
    cin>>num;
    vector<int>v;
    v.push_back(1);
    factorial_of_larger_number(v,num);
}