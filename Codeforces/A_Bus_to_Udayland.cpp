#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    vector<vector<char>> arr(t, vector<char>(5, 'A'));
    

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            char temp;
            cin>>temp;
            arr[i][j] = temp;
        }
    }
    bool flag = false;
    for(int i=0; i<arr.size(); i++){
        for(int j=1; j<arr[i].size(); j++){
            if(arr[i][j] == 'O' && arr[i][j-1] == 'O'){
                arr[i][j] = '+';
                arr[i][j-1] = '+';
               flag = true;
               break;
            }
         
        }
        if(flag == true) break;
        cout << endl;
    }
    if(flag == true){
        cout << "YES" << endl;
        for(auto &x:arr){
            for(auto &y:x){
                cout <<y;
            }
            cout << endl;
        }
    }else
    cout << "NO" << endl;

   
    return 0;
}