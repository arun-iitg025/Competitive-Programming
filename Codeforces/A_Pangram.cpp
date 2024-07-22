#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    set<int> st;
    for(int i=0; i<n; i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = str[i]+32;
        }
    }
    for(auto &x:str){
        st.insert(x);
    }
    if(st.size() == 26){
        cout << " YES"<< endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}