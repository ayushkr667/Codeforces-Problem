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
        int n; cin>>n;
        int arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        } 

        ll sum  = 0; 
        for(ll i=1; i<n; i++)
        {
            sum += max(arr[i-1] - arr[i], 0);
        }
        cout<<sum<<"\n";
    }
    return 0;
}
