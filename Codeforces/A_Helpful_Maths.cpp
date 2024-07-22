#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<int> temp;
    for(auto &x:str){
        if(x != '+'){
            temp.push_back(x-'0');
        }
    }
    sort(temp.begin(), temp.end());
    string ans = "";
    for(auto &x:temp){
        // cout << x << endl;
        ans+= to_string(x);
        ans+='+';
    }
    ans.erase(ans.size()-1, 1);
    cout << ans <<endl;

    return 0;
}