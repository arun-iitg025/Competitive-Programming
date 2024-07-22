#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string temp = "codeforces";
    while(n--){
        string str;
        cin>>str;
        int count = 0;

        for(int i=0; i<temp.size(); i++){
            if(temp[i] != str[i]) count++;
        }
        cout << count << endl;
    }
    return 0;
}