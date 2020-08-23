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
vector<int> arr[100001];
int team[100001], vis[100001];
int n, m, t;
int flag = 1;
void dfs(int node, int col)
{
    vis[node] = 1;
    team[node] = col;
    vector<int>:: iterator it;
    for(it = arr[node].begin(); it!=arr[node].end(); it++)
    {
        if(vis[*it] && team[*it] == col)
        {
            flag = 0;
        }
        if(!vis[*it])
        dfs(*it , col^1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>n>>m;
    while (m--)
    {
        int a, b;
        cin>>a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
    }

    for(int i =1; i<=n; i++)
    {
        if(!vis[i])
            dfs(i,0);
    }
    if(!flag)
    {
        cout<<"IMPOSSIBLE";
    }
    else
    {
        for(int i=1; i<=n; i++)
            cout<<team[i]+1<<" ";
    }
    return 0;
}
