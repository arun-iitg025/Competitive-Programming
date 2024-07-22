#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int words, length;
    cin>>words>>length;
  
    vector<int> arr;
    while(words--){
        int val;
        cin>>val;
        arr.push_back(val);
    }

    int ans = 1;
    for(int i=1; i<arr.size(); i++){

        if((arr[i] - arr[i-1]) > length) ans = 1;
        else ans++;
       
    }
    cout << ans << endl;
    return 0;
}