#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> arr;
        for(int i=0; i<4; i++){
            int val;
            cin>>val;
            arr.push_back(val);
        }
        int first = max(arr[0], arr[1]);
        int second = max(arr[2], arr[3]);

        sort(arr.begin(), arr.end());
        int ff = arr[3];
        int ss = arr[2];
        if((ff == first || ff== second) && (ss == first || ss == second)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}