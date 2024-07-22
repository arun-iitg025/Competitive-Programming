#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        unordered_map<int, vector<int>> mp;
        for(int i=0; i<4; i++){
            int a, b;
            cin>>a>>b;
            mp[a].push_back(b);
        }
        int temp;
        for(auto &x:mp){
            if(x.second.size()>1){
                temp = abs(x.second[0] - x.second[1]);
            }
        }
         cout << temp*temp << endl;
    }
    return 0;
}