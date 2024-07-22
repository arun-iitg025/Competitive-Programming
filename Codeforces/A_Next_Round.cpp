#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k;
    cin>>n>>k;
    vector<int> contestant;
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        contestant.push_back(val);
    }
    int temp = contestant[k-1];
    int ans = 0;

    for(int i=0; i<contestant.size(); i++){
        if(contestant[i]>=temp && contestant[i]>0) ans++;
    }
    cout << ans << endl;   
    return 0;
}