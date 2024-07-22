#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int count = 0;
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        if(val>h){
            count+=2;
        }
        else{
            count++;
        }
    }
    cout << count << endl;
    return 0;
}