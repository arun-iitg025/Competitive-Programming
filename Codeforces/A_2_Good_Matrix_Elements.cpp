#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n, vector<int>(n, 0));
  
    for(int i=0; i<n; i++){
        for(int j=0; i<n; j++){
            int val;
            cin>>val;
            v[i][j] = val;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << v[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;
}