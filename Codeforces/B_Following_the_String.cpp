#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
       
        while(x!=0){
            if(x>y){
                y = x+y;
                x = y-x;
                y = y-x;
                // cout << "x = " <<x<< " "<<"y = "<< y<< endl;
            }
            else{
                int temp =x;
                x = y-x;
                if(x == 0){
                    cout << y << endl;
                    break;
                }
                y = temp;
                // cout << "x = " <<x<< " "<<"y = "<< y<< endl;
                
            }
        }
    }
    return 0;
}
