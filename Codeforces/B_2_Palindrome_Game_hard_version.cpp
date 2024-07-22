#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;;
        cin>>n;
        string str;
        cin>>str;
        int i=0;
        int j = n-1;
        bool flag = true;
        while(i<j){
            if(str[i] != str[j]){
                cout << "ALICE" << endl;
                flag = false;
                break;
            }
            i++;
            j--;
        }
        if(flag == true){
            cout << "BOB" << endl;
        }
    }
    return 0;
}