#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;
        if(l%2 != 0 && r%2 !=0){
            cout << "No" << endl;
        }
        else{
            if(l%2 == 0 && r%2 == 0){
                bool flag1 = false;
                bool flag2 = false;
        
                int cut1 = l/2;
                int cut2 = r/2;
                if(cut1 == r) flag1 = true;
                if(cut2 == l) flag2 = true;
                if(flag1 == false || flag2 == false){
                    cout << "Yes" <<endl;
                }
                else{
                    cout << "No" << endl;
                }

            }
        else if(l%2 == 0){
            int cut = 0;
           cut = l/2;
            if(cut != r) {
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else{
            int cut = 0;
           cut = r/2;
            if(cut != l) {
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        
    }
    }
    return 0;
}