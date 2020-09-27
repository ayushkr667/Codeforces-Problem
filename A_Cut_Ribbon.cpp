#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
map<ll, ll> mp;

ll run(ll n, ll a, ll b, ll c)
{
    if(n == 0)
        return 0;
    if(n < 0)
        return INT_MIN;
    //memoization
    if(mp.count(n))
        return mp[n];

    return mp[n] =  1 + max( run(n-a, a, b, c), max( run(n-b, a, b,c), run(n-c, a, b, c)));
}


int main()
{

ll n,a,b,c;
cin>>n >>a >>b >>c;
cout<< run(n,a,b,c) ;

return 0;
}
