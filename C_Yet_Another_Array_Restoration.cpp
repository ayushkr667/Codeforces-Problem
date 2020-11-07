/*-------------------------------*
| Name: Ayush Kumar              |
| Site:                          |
| Email: ayushkr667@gmail.com    |
*-------------------------------*/

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
    ll n, x, y;
    ll t; cin>>t;
    while (t--)
    {
        cin>>n>>x>>y;
        ll diff  =(y-x);
        ll d  = INF;
        int flag  = 0;
        for(ll i=1; i<= diff; i++)
        {
            if(diff % i ==0)
            {
                if(diff/i + 1 == n)
                {
                    flag =1;
                    for(ll j = x; j<=y; j+=i)
                    {
                        cout<<j<<" ";
                    }
                    cout<<"\n";
                }
                else if(diff/i + 1 < n)
                {
                    d = min(d, i);
                }
            }
        }
        if(!flag)
        {
            ll tt = y;
            while(n--) 
            {
                if(tt < 1)
                {
                    break;
                }
                cout<<tt<<" ";
                tt = tt-d;
            } 
            tt = y + d;
            n++;
            while(n--)
            {
                cout<<tt<<" ";
                tt = tt+d;
            } 
            cout<<"\n";  
        }
    }
    return 0;
}
