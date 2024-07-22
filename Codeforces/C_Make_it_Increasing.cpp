#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define ll long long
 
int main()
{
    ll n;
    cin>>n;
    ll ar[n+4];
    for(ll i=0; i<n; i++)cin>>ar[i];
    ll ans = 1e18;
    for(ll i=0; i<n; i++)
    {
        ll mx = 0;
        ll ans1=0;
        for(ll j=i-1; j>=0; j--)
        {
            ll x = ar[j];
            if(x<mx)
            {
                ans1++;
                mx=-ar[j];
            }
            else
            {
                ll y = abs(mx);
                ll z = y/x + 1;
                ans1+=z;
                mx=-(x*z);
            }
        }
        mx=0;
        for(ll j=i+1; j<n; j++)
        {
            ll x = ar[j];
            if(x>mx)
            {
                ans1++;
                mx = ar[j];
            }
            else
            {
                ll z = mx/x + 1;
                ans1+=z;
                mx=x*z;
            }
        }
        ans = min(ans1,ans);
    }
    cout<<ans<<endl;
 
    return 0;
}