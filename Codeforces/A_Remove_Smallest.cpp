#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> temp;
        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            temp.push_back(val);
        }
        bool flag = false;
        sort(temp.begin(), temp.end());
        for(int j=temp.size()-1; j>0;j--){
            if(abs(temp[j] - temp[j-1])>1){
                flag = true;
                break;
            }
        }
        if(flag == true){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}