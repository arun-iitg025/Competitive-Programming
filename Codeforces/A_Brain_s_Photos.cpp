#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int m,n;
    cin>>m>>n;
    bool black_and_white = false;
    bool color_ful = false;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int val;
            char ch;
            cin>>ch;
            if(ch == 'W' || ch == 'B' || ch == 'G'){
                black_and_white = true;
            }
            else{
                color_ful = true;
            }
        }
    }
    if(color_ful == true) {
        cout << "#Color" << endl;
    }
    else{
        cout << "#Black&White" << endl;
    }
    return 0;
}