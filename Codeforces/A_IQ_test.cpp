#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    int even = 0;
    int odd = 0;
    int eI = 0;
    int oI = 0;
    int index = 1;
    while(t--){
        int val;
        cin>>val;
        if(val%2 == 0){
            even++;
            eI = index++;
        }
        else{
            odd++;
            oI = index++;
        }
    }
    if(even<odd){
        cout << eI<<endl;
    }
    else{
        cout << oI<< endl;
    }
    return 0;
}