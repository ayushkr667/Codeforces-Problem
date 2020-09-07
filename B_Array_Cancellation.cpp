/********************
*             __    *
*   OHM   |__|__    *
*          __|  |   *
*                   *
*********************/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define INF (ll) 1e18
const double PI = 3.141592653589793238460;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll arr[n];
        for(ll i=0; i<n; i++)
            cin>>arr[i];

        ll positive = 0;
        for (ll i = 0; i <n ; i++)
        {
            if(arr[i] > 0)
            {
                positive+=arr[i];
            }
            else if(arr[i] < 0)
            {
                ll k=min(positive,-arr[i]);
                arr[i]+=k;
                positive-=k;
            }
            
        }
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if(arr[i] < 0)
                sum+=abs(arr[i]);
        }
        cout<<sum<<"\n";
    }
    return 0;
}
