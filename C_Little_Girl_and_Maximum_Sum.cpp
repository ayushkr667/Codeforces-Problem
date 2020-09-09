#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n,q;     cin>>n>>q;
    ll arr[n+1];
    for(ll i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    ll inc[n+2] = {0};
    while(q--)
    {
        ll l, r;    cin>>l>>r;
        inc[l]++,   inc[r+1]--;
    }

    for(ll i=1; i<=n; i++)
    {
        inc[i]+=inc[i-1];
    }

    sort(arr+1, arr+1+n);
    sort(inc+1, inc+1+n);

    ll sum = 0;
    for(ll i=1; i<=n; i++)
    {
        sum+=(arr[i]*inc[i]);
    }

    cout<<sum;
    return 0;
}
