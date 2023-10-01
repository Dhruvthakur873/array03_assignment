#include<bits/stdc++.h>
using namespace std;
int main(){
    //Bruteforce approach;
    // for(int i = 0;i<=v.size()-1;i++){
    //     for(int j = i+1;j<=v.size()-1;j++){
    //         for(int k = j+1;k<=v.size()-1;k++){
    //             if(v[i]+v[j]+v[k]==key){
    //                 cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<" these have sum equal to key  ";
    //             }
    //         }
    //     }
    // }
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key = 6;

    bool flag = false;
    for (int i = 0; i < v.size() - 2; i++) {
        int low = i + 1;
        int high = v.size() - 1;

        while (low < high) {
            int sum = v[i] + v[low] + v[high];

            if (sum == key) {
                cout << v[i] << " " << v[low] << " " << v[high] << " have a sum equal to the key" << endl;
                flag = true;
                low++;
                high--;  // Added this line to decrement high
            } else if (sum < key) {
                low++;
            } else {
                high--;  // Corrected this line to decrement high
            }
        }
    }

    if (!flag) {
        cout << "No triplets found" << endl;
    }

    return 0;
}



