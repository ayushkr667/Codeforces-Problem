#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{
ll n, m,k;
cin>>n>>m>>k;
ll arr[n+1];
ll diff[n+2];
for(int i=1; i<=n; i++)
{
    cin>>arr[i];
}

//difference array
diff[1]  = arr[1];
for(int i=2; i<=n; i++)
{
    diff[i]  = arr[i] -  arr[i-1];
}

vector< pair< pair<ll, ll> , ll> > vect;
for(ll i=0; i<m; i++)
{
    ll l, r, d;
    cin>>l>>r>>d;
    pair<ll, ll> p = make_pair(l,r);
    pair<pair<ll, ll>, ll> f = make_pair(p,d);
    vect.pb(f);
}

ll query[m+2]= {0};

while(k--)
{
    ll a,b;
    cin>>a>>b;
    query[a]++;
    query[b+1]--;
}
 
for(int i=2; i<=m; i++)
{
    query[i] +=query[i-1];
}

//update
for(ll i=1; i<=m; i++)
{
    ll times = query[i];
    ll l = vect[i-1].first.first;
    ll r = vect[i-1].first.second;
    ll d = vect[i-1].second;
    diff[l]+=(times*d); diff[r+1]-=(times*d);
}


arr[1] = diff[1];
cout<<arr[1]<<" ";
for(ll i=2; i<=n; i++)
{
    arr[i]  = diff[i] + arr[i-1];
    cout<<arr[i]<<" ";
}

return 0;
}
