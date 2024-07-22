#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    unordered_set<int>st;
    for(int i=0;i<p; i++){
        int val;
        cin>>val;
        st.insert(val);
    }
    int q;
    cin>>q;
    for(int i=1; i<=q; i++){
        int val;
        cin>>val;
        st.insert(val);
    }
    bool flag = false;
    for(int i=1; i<=n; i++){
        if(st.find(i) == st.end()){
            cout << "Oh, my keyboard!" << endl;
            flag = true;
            break;
        }
    }
    if(flag == false){
        cout << "I become the guy.";
    }
    return 0;
}