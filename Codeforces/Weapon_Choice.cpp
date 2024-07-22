#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int h,x,y1,y2,k;
        cin>>h>>x>>y1>>y2>>k;

        int temp = h;
        int count1 = 0;
        int rem;

        while(k-- && h>0){
            h-= y1;
            count1++;
        }
        // cout << " kya" << count1 << endl;
        while(h>0){
             h-=y2;
            count1++;
        }
        int count2 =0;
        while(temp>0){
            count2++;
            temp-=x;
        }
        cout << min(count1, count2) << endl;

    }
    return 0;
}
