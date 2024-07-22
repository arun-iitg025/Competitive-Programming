#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int a = n%10;
	n = n/10;
	int b = n%10;
	string str = "";
	str += to_string(b);
	str += to_string(a);
	str = "K" +str;
	cout << str << endl;

}
