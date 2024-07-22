#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string str;
    cin>>n;
    cin>>str;
    stack<char> st;
    st.push(str[0]);
    int count = 0;
    for(int i=1; i<str.size(); i++){
        if(st.top() == str[i]){
            count++;
        }else{
            st.push(str[i]);
        }
    }
    cout << count << endl;
    return 0;
}