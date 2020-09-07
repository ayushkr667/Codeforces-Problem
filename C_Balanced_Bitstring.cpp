/********************
*             __    *
*   OHM   |__|__    *
*          __|  |   *
*                   *
*********************/

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
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<k;i++)
    {
        if(s[i]=='?')
        {
            for(int j=i+k;j<n;j+=k)
            {
                if(s[j]!='?')
                {
                    s[i]=s[j];
                    break;
                }
            }
        }
    }

    for(int i=0;i<k;i++)
    {
        if(s[i]!='?')
        {
            for(int j=i+k;j<n;j+=k)
            {
                if(s[j]=='?')
                    s[j]=s[i];
                else if(s[j]!=s[i])
                {
                    cout<<"NO"<<"\n";
                    return;
                }
            }
        }
    }
    int one=0,zero=0;
    for(int i=0;i<k;i++)
    {
        if(s[i]=='1')
            one++;
        if(s[i]=='0')
            zero++;
    }
        
    if(one<=(k/2) && zero<=(k/2))
        cout<<"YES"<<"\n";
    else
    {
        cout<<"NO"<<"\n";
    }
}
int main()
{
    ios::sync_with_stdio(0);    cin.tie(0);    cout.tie(0);
    int t;  cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
    return 0;
}









