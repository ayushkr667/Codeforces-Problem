#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t;
    cin>>t;
    while (t--) 
    {
        ll n, k;
        cin>>n>>k;
        ll arr[n];
        ll d= INT_MIN;
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
            d = max(d, arr[i]);
        }

        ll temp = INT_MIN;
        for(ll i=0; i<n; i++)
        {
            arr[i] = d -arr[i];
            temp = max(temp, arr[i]);
        }

        if(k%2!=0)
        {
            for(ll i=0; i<n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }

        for(ll i=0; i<n; i++)
        {
            arr[i] = temp -arr[i];
        }

        if(k%2==0)
        {
            for(ll i=0; i<n; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
    }
    
    
    return 0;
}
