#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    vector<int> ans;
    while(t--){
        int val;
        cin>>val;
        ans.push_back(val);
    }
    sort(ans.begin(), ans.end());
    int size = ans.size();
    int largest = ans[size-1];
    int count = 0;
    for(int i=0; i<size-1; i++){
        count +=ans[i];
    }
    cout << largest*(size - 1) - count << endl;
    return 0;
}