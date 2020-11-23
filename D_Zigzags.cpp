/*-------------------------------*
| Name: Ayush Kumar              |
| College: SOE, CUSAT            |
| Dept: CSE                      |
| Site: codeforces               |
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
ll n, m, t;

void solve(ll arr[])
{
    ll ans = 0;
    ll left[3001] = {0};//count to left of j element like k is i
    //j is at 1st
    for (ll j = 0; j < n; j++)
    {
        ll right[3001]  = {0};// to the right of k element like j is l
        //k is at last
        for (ll k = n-1; k > j; k--)
        {
            ans+=(left[arr[k]] * right[arr[j]]);
            right[arr[k]]++;//increment the k
        }
        left[arr[j]]++;//increment j
    }
    cout<<ans<<"\n";
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>t;
    while (t--)
    {
        cin>>n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        solve(arr);
    }
    
    return 0;
}
