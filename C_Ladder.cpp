#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n , m ;
    cin>>n >> m;
    ll arr[n+1];
    for(ll i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    ll left[n+1] = {0}; // to keep track how many position we can move right from i
                        //such that array is non decresing
    ll right[n+1] = {0}; // to keep track how many position we can move left;
                        // such that array is non decreasing

    right[n] = 1;//if there is no movement at that i = 1
    for(ll i=n-1; i>=1; i--)
    {
        if(arr[i] > arr[i+1])
            right[i] = 1;
        else
        {
            right[i] = right[i+1] + 1;
        }
        
    }

    left[1] = 1;//if there is no movement at that i = 1
    for(ll i=2; i <= n; i++)
    {
        if(arr[i] > arr[i-1])
            left[i] = 1;
        else
        {
            left[i] = left[i-1] + 1;
        }  
    }

    while (m--)
    {
        ll l, r;
        cin>>l>>r;
        if((right[l]  + left[r] -1 ) >= (r-l+1))
            cout<<"Yes\n";

        else
        {
            cout<<"No\n";
        }
    }
    
    return 0;
}
