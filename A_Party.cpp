#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
vector<int> arr[2001];
int vis[2001];
int flag, res;
void dfs(int node)
{
    flag++;
    vis[node] = 1;
    vector<int>:: iterator it;
    for(it = arr[node].begin(); it!=arr[node].end(); it++)
    {
        if(!vis[*it])
            dfs(*it);
    }
    res = max(res, flag);
    flag--;
    vis[node] = 0;
}

int main()
{
    ll t;  cin>>t;
    for(int i=1; i<=t; i++)
    {
        int temp; cin>>temp;
        if(temp > 0 )
            arr[temp].pb(i);
    }

    for(int i=1; i<=t; i++)
    {
        flag = 0;
        if(!vis[i])
            dfs(i); 
    }
    cout<<res<<"\n";
    return 0;
}
