#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{

ll  a,b;
cin>>a>>b;

int gcd = __gcd(a, b);

vector<ll>vect;
for(ll i=1; i*i<= gcd; i++)
{
    if(gcd%i==0)
    {
    vect.pb(i);
    if(i*i != gcd)
    vect.pb(gcd/i);
    }
}

ll n;   cin>>n;
while (n--)
{
    ll l, r;
    cin>>l>>r;
    ll res =-1;
    vector<ll>::iterator d;
    for(d = vect.begin(); d!=vect.end(); d++)
    {
        if(*d>=l && *d<=r)
            res = max(res,*d);
    }
    cout<<res<<"\n";
}

return 0;
}
