/*-------------------------------*
| Name: Ayush Kumar              |
| College: SOE, CUSAT            |
| Dept: CSE                      |
| Email: ayushkr667@gmail.com    |
*-------------------------------*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
const double PI = 3.141592653589793238460;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string str[105];
    ll i, j, n, m, ans;
    cin>>n>>m;

    for(i=0;i<n;i++) cin>>str[i];
    ans=1;
    for(i=0; i<m; i++)
    {
        set<char>s;
        for(j=0;j<n;j++) 
            s.insert(str[j][i]);
        
        ans=(ans*s.size())%mod;
    }
    cout<<ans;

    return 0;
}
