#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
ll t;  cin>>t;
while(t--)
{
    ll n; cin>>n;
    ll a[n], b[n];
    ll m1 = INT_MAX, m2 = INT_MAX;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        m1 = min(m1, a[i]);
    }
    for(ll i=0; i<n; i++)
    {
        cin>>b[i];
        m2 = min(m2, b[i]);
    }
    ll res = 0 ;
    for(ll i=0; i<n; i++)
    {
        ll t1, t2;
        t1 = a[i] - m1; t2= b[i] - m2;
        if(t1>0 || t2>0)
            res+=max(t1,t2);
    }
    cout<<res<<"\n";
}
return 0;
}
