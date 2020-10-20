#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t;   cin>>t;
    for (ll test = 1; test <=t ; test++)
    {
        ll n, k, w;
        cin>> n >> k >> w;

        ll l[n+1];
        ll h[n+1];
        for(ll i=1; i<=k; i++)
        {
            cin>>l[i];
        }

        ll al, bl, cl, dl;
        cin>> al >> bl >> cl >> dl;

        for(ll i=1; i<=k; i++)
        {
            cin>>h[i];
        }

        ll ah, bh, ch, dh;
        cin>> ah >> bh >> ch >> dh;

        for(ll i=k+1; i<=n; i++)
        {
            ll temp =  (((al * l[i-2])%dl + (bl * l[i-1])%dl )%dl + cl)%dl + 1;
            l[i] = temp;

            temp =  (((ah * h[i-2])%dh + (bh * h[i-1])%dh )%dh + ch)%dh + 1;
            h[i] = temp;

        }

        ll m = h[1];
        ll s = w;
        ll res = (2*(m + s))%mod;
        cout<<res<<" ";
        for(int i=2; i<=n; i++)
        {
            ll pp = 0;
            s = s + (l[i] - l[i-1]);
            if(l[i-1] + w < l[i])
                pp += h[i-1] +  h[i];
            m = max(m, h[i]);
            pp =  (pp %mod + (2*(m + s)%mod))%mod;

            if(l[i-1] + w < l[i])
                pp = pp - (2*(l[i]-l[i-1]-w))%mod ;

            res =  (res*pp)%mod;
            cout<<pp<<" ";
        }

        cout<<"Case #"<<test<<": "<<res<<"\n";
        for(ll i=1; i<=n; i++)
        {
            cout<<l[i]<<" ";
        }
        cout<<"\n";
        for(ll i=1; i<=n; i++)
        {
            cout<<h[i]<<" ";
        }

    }
    return 0;
}
