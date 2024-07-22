#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        unordered_set<char> st;
        for(auto &x:str){
            st.insert(x);
        }
        // cout << "st.size()" << st.size() << endl;
        if(st.size() <= 2) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}