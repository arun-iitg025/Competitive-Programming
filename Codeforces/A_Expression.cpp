#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    vector<int> ans;
    int a,b,c;
    cin>>a>>b>>c;
    
    int e1 = a+b*c;
    ans.push_back(e1);
    int e2 = a*(b+c);
    ans.push_back(e2);
    int e3 = a*b*c;
    ans.push_back(e3);
    int e4 = (a+b)*c;
    ans.push_back(e4);
    int e5 = a+b+c;
    ans.push_back(e5);
    sort(ans.begin(), ans.end());
    cout << ans[ans.size()-1];

    return 0;
}