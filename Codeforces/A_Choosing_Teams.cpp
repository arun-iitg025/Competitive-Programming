#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t,n;
    cin>>t>>n;
    vector<int> ans;
    while(t--){
        int val;
        cin>>val;
        ans.push_back(val);
    }
    int count = 0;
    sort(ans.begin(), ans.end());
    for(int i=2; i<ans.size();i++){
        if((ans[i]+n)<=5){
            count++;
        } 
        i+=2;
    }
    cout << count << endl;
    return 0;
}