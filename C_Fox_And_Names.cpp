#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
const double PI = 3.141592653589793238460;
string s[120];
vector<int> g[30];
int flag = 0;
int ran[40];
int vis[120], used[120];
int tot =0;

void solve(int x)//creation of edge
{
    for(int i=0; i<s[x].size() && i<s[x+1].size(); i++)
    {
        if(s[x][i] != s[x+1][i])
        {
            g[s[x+1][i]-'a'].pb(s[x][i]-'a');
            return;
        }
    }
    if(s[x+1].size() < s[x].size())
    {
        cout<<"Impossible\n";
        exit(0);
    }
}

void dfs(int x)
{
    vis[x] =  used[x]  = 1;
    for (int i = 0; i < g[x].size(); i++)
    {
        if(used[g[x][i]])
        {
            cout<<"Impossible\n";
            exit(0);
        }
        if(!vis[g[x][i]])
            dfs(g[x][i]);
    }
    used[x] = 0;
    ran[tot++] = x;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        solve(i);
    }
    for (int i = 0; i < 26; i++)
    {
        memset(used, 0, sizeof(used));
        if(!vis[i])
            dfs(i);
    }
    for(int i=0;i<26;i++)
        printf("%c",ran[i]+'a');
        
    return 0;
}
