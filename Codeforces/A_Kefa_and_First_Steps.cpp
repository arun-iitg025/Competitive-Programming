#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    vector<int> temp;
    while(t--){
        int val;
        cin>>val;
        temp.push_back(val);
    }
    int prev = temp[0];
    int maxi = 1;
    int count = 1;
    for(int i=1; i<temp.size(); i++){
        if(temp[i]>=prev){
            count++;
        }
        else{
            count = 1;
        }
        prev = temp[i];
        maxi = max(maxi, count);
    }
    cout << maxi << endl;
    return 0;
}