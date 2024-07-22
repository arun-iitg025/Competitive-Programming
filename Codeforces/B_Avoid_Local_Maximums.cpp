#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+3];
        for(int i=0;i<n;i++)cin>>ar[i];
        int ans = 0;
        ar[n]=0;
        for(int i=1;i<n-1;i++)
        {
            if(ar[i]>ar[i-1] && ar[i]>ar[i+1])
            {
                //cout<<i<<" "<<ar[i]<<endl;
                ans++;
                if(ar[i+2]==max(ar[i],max(ar[i+1],ar[i+2])))ar[i+1]=ar[i+2];
                else if(ar[i]>ar[i+1])ar[i+1]=ar[i];
                else ar[i]=ar[i+1];
            }
        }
        cout<<ans<<endl;
        for(int i=0;i<n;i++)cout<<ar[i]<<" ";
        cout<<endl;
    }
}