#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;  cin>>t;
    ll arr[t];
    for(ll i=0; i<t; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+t, greater<ll>());

    ll sum= 0;
    for(ll i=t; i>0; i/=4)
    {
        for(ll k=0; k<i; k++)
        {
            sum+=arr[k];
        }
    }
    cout<<sum;
    return 0;
}
