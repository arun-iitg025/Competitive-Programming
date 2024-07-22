#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;

        int mini = min(a,b);
        int maxi = max(a,b);

        int count = 0;
        while(mini<maxi){
            count++;
            maxi -= c;
            mini+=c;
        }
        cout << count << endl;
    }
    return 0;
}