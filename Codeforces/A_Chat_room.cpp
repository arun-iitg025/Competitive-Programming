#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int count = 0;
        int sum = 0;
	    for(int i=0; i<n; i++){
	        int val;
	        cin>>val;
	        sum+=val;
	        if(sum>=m){
	            count++;
	            sum = 0;
	        }
	    }
        cout << count << endl;
	}
    return 0;
}