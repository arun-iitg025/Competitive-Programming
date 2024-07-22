#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t--){
	    double n, a, b;
	    cin>>n>>a>>b;
	    
	    int first = ceil(n/a);
	    int second = ceil(n/b);
	    
	    if(first<second) cout << "Alice" << endl;
	    else cout <<"Bob" << endl;
	}
    return 0;
}
