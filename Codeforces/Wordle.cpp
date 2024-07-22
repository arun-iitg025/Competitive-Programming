#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string str, temp;
        cin>>str>>temp;
        string ans  = "";
        for(int i=0; i<temp.size(); i++){
            if(str[i] == temp[i]){
                ans+="G";
            }
            else{
                ans+="B";
            }
        }
        cout << ans << endl;
    }
    return 0;
}