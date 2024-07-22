#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
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
        if(n == 1){
            cout <<"YES" << endl;
        }
        if(n == 2){
            if(arr[0] <=arr[1]){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else if(n == 3){
            vector<int> brr;
            for(auto &x:arr){
                brr.push_back(x);
            }
            sort(brr.begin(), brr.end());
            if(arr[1] == brr[1]){
                cout <<"YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
