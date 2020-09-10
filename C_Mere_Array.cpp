#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
const double PI = 3.141592653589793238460;
vector< ll > v[100001];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    ll t;
    cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        ll arr[n+1], brr[n+1];
        ll m = INT_MAX;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            brr[i]  = arr[i];
            m = min(m, arr[i]);
        }
        sort(brr+1, brr+n+1);
        ll count = 0;
        bool flag=0;
        vector<ll> vect;
        for(int i=1; i<=n; i++)
        {
            if(arr[i]!=brr[i])
            {
                if(arr[i]%m!=0)
                {
                    flag =1;
                    break;
                }
                vect.pb(arr[i]);
            }
        }
        if(flag)
        {
            cout<<"NO\n"; continue;
        }
        else
        {
            cout<<"YES\n"; continue;
        }
    }
    
    return 0;
}
