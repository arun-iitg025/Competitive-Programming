#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    vector<int> arr;
    while(t--){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    int mini = INT_MAX;
    int a, b;
    for(int i=0; i<arr.size()-1; i++){
        if(abs(arr[i] - arr[i+1])< mini){
            a = i+1;
            b = i+2;
            mini = abs(arr[i] - arr[i+1]);
        }
    }
    if(abs(arr[0] - arr[arr.size()-1])<mini){
        a = arr.size();
        b = 1;
    }
    cout << a << " "<< b<< endl;
    return 0;
}