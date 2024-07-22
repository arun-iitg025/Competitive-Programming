#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> ans;
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);
    sort(ans.begin(), ans.end());
    int count = 0;
    for(int i=0; i<ans.size(); i++){
        for(int j=i+1, j<ans.size(); j++){
            for(int k=j+1; k<ans.size(); k++){
                if(ans[i]+ans[j]+ans[k] == n){
                    
                }
            }
        }
    }
    return 0;
}