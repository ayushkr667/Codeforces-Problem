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
    ll t; cin>>t;
    while (t--)
    {
        ll a, b;
        cin>>a>>b;
        ll res = abs(b-a)/10; 
        if(abs(b-a)%10 != 0)
            res++;
        cout<<res<<"\n";
    }
    
    return 0;
}
