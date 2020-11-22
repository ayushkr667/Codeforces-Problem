#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll l,r; cin>>l>>r;
    ll temp  = l^r;

    ll msb = 0;
    while(temp > 0)
    {
        temp>>=1;
        msb++;
    }

    ll ans =0;
    ll two=1;
    while(msb--)
    {
        ans+=two;
        two<<=1;
    }
    cout<<ans;

    return 0;
}
