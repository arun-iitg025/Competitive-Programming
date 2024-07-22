#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n>>b;
        int maxi = INT_MIN;
        bool flag = false;
        while(n--){
            int w,h,p;
            cin>>w>>h>>p;
            int area = w*h;
            if(area>maxi && b>=p){
                flag =true;
                maxi = area;
            }
        }
        if(flag == false){
            cout << "no tablet " << endl;
        }
        else{
            cout << maxi << endl;
        }
    }
    return 0;
}
