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
        bool flag = false;
        for(int i=0; i<n-2; i++){
            int temp = arr[i];
            if(arr[i]<0){
                cout << "NO"<< endl;
                flag = true;
                break;
            }
            arr[i] -= temp;
            arr[i+1] -=  2*temp;
            arr[i+2] -= temp;
        }
        if(flag == false ){
            for(auto &x:arr){
                if(x !=0 ){
                    cout << "NO" << endl;
                    flag = true;
                    break;
                }
            }
            if(flag == false) cout << "YES" << endl;
        }
    }
    return 0;
}