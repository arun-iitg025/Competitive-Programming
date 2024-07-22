#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t = n;
    int sum = 0;
    vector<vector<int>> ans;
    while(n--){
        vector<int> temp;
        for(int i=0; i<3; i++){
           int val;
           cin>>val;
           temp.push_back(val);
        }
        ans.push_back(temp);
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<t; j++){
            sum += ans[j][i]; 
        }
        if(sum != 0){
            cout << "NO" << endl;
            break;
        }
    }
    if(sum == 0)cout << "YES" << endl;
    return 0;
}