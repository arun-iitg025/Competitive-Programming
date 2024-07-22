#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t,n;
    cin>>t>>n;
    vector<int> temp;
    while(t--){
        int val;
        cin>>val;
        temp.push_back(val);
    }
    sort(temp.begin(), temp.end());
    int size = temp.size();
    int d = 2*max(temp[0], n- temp[size-1]);

    for(int i=1; i<size; i++){
        d = max(d, temp[i]-temp[i-1]);
    }
    cout << fixed<<setprecision(10) << (double)d/2<<endl;
    return 0;
}