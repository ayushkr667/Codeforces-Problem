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
#define dbg printf("in\n");
#define nl printf("\n");

#define N 100010
#define mod 1000000007

using namespace std;

ll total,mult,val[N];
bool vis[N];
stack<ll> ss;
vector<ll> x;
vector<ll> adj[N*3];
vector<ll> adj2[N*3];

void dfs(ll s)
{
    vis[s]=1;
    vector<ll>::iterator it;
    for( it = adj[s].begin(); it!= adj[s].end(); it++)
    {
        if(!vis[*it])
            dfs(*it);
    }

    ss.push(s);
}

void dfs2(ll s)
{
    vis[s]=1;
    x.push_back(s);
    vector<ll>::iterator i;
    for( i = adj2[s].begin(); i!= adj2[s].end(); i++)
    {
        if(!vis[*i])
            dfs2(*i);
    }
}

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m;
    ll u,v;
    ll count;

    scanf("%I64d",&n);
    for(i=1;i<=n;i++)
        scanf("%I64d",&val[i]);

    scanf("%I64d",&m);

    for(i=0;i<m;i++)
    {
        scanf("%I64d%I6d",&u,&v);

        adj[u].push_back(v);
        adj2[v].push_back(u);
    }

    memset(vis,0,sizeof(vis));
    for(i=1;i<=n;i++)
    {
        if(!vis[i])
            dfs(i);
    }

    total=0,mult=1;
    memset(vis,0,sizeof(vis));

    while(!ss.empty())
    {
        if(!vis[ss.top()])
        {
            x.clear();
            dfs2(ss.top());

            m=mod;count=0;
            for(i=0;i<x.size();i++)
                m=min(m,val[x[i]]);

            total+=m;

            for(i=0;i<x.size();i++)
            {
                if(val[x[i]]==m)
                    count++;
            }

            mult*=(count%mod);
        }

        ss.pop();
    }

    printf("%I64d %I64d",total,mult%mod);

    return 0;
}