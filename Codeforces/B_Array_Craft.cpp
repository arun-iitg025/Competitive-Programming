#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        x--, y--;

        vector<int> a(n);
        for (int i = y; i <= x; i++) a[i] = 1;
        for (int i = y - 1; i >= 0; i--) a[i] = (y - i) & 1 ? -1 : 1;
        for (int i = x + 1; i < n; i++) a[i] = (i - x) & 1 ? -1 : 1;

        for (int i = 0; i < n; i++)
            cout << a[i] << " \n"[i == n - 1];
    };
    
    return 0;
}