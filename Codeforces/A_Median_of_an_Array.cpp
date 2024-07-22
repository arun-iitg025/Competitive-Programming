#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            arr.push_back(val);
        }
        sort(arr.begin(), arr.end());
        int value = arr[(n-1)/2];
        int index = (n-1)/2;
        // cout << "value" << value <<" "<< index << endl;
        int count = 0;
        for(int i = index; i<n; i++){
            if(arr[i] == value){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}