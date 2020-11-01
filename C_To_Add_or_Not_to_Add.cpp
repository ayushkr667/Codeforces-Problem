#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    ll n,k;
    cin>>n>>k;
    ll arr[n+1];
    for(ll i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    sort(arr+1, arr+1+n);

    ll sum[n+1];
    for(ll i=1; i<=n; i++)
    {
        sum[i] = sum[i-1] + arr[i];
    }

    ll b=0;
    ll ans = arr[1], count = 1;

    for(ll i=2; i<=n; i++)
    {
        while ((i-b)*arr[i]-(sum[i]-sum[b])>k)    
        {
            b++;
        }
        if(i-b>count)
        {
            count = i-b;
            ans = arr[i];
        }
        
    }
    cout<<count<<" "<<ans<<"\n";
    return 0;
}
