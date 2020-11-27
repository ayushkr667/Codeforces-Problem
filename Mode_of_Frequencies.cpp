/*-------------------------------*
| Name: Ayush Kumar              |
| College: SOE, CUSAT            |
| Dept: CSE                      |
| Site: codechef                 |
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
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t;
    cin>>t;
    ll mp[11];
    map<ll, ll>res;
    while (t--)
    {
        memset(mp, 0, sizeof(mp));

        ll n; cin>>n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }

        ll temp[10001];
        memset(temp, 0, sizeof(temp));
        ll m = INT_MIN;
        for (ll i = 1; i < 11; i++)
        {
            temp[mp[i]]++;
            //cout<<mp[i]<<" ";
        }
        for (ll i = 1; i < 10001; i++)
        {
            m = max(m, temp[i]);
        }
        vector<ll>res;
        for (ll i = 1; i < 10001; i++)
        {
            if(temp[i] == m)
            {
                cout<<i<<"\n"; break;
            }
        }
        // cout<<"\n";
        // for(int i=0; i<res.size(); i++)
        // {
        //     cout<<res[i]<<" ";
        // }
        // cout<<"\n";
        // //cout<<temp[1]<<" "<<temp[2]<<" "<<temp[3]<<"\n";
        // cout<<m<<"\n";
    
    }
    

    
    return 0;
}
