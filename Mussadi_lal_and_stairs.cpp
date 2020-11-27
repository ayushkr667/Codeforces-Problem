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
int dp[100001];
void solve()
{
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i < 100001; i++)
    {
        dp[i] =  (((dp[i-1] + dp[i-2])%mod)+ dp[i-3])%mod;
    }  
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    solve();
    while (t--)
    {
        int n; cin>>n;
        cout<<dp[n]<<"\n";
    }
    return 0;
}
