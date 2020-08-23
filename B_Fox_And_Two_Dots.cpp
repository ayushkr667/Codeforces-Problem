#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
const double PI = 3.141592653589793238460;

char arr[60][60];
int vis[60][60];
int n, m;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
bool isvalid(int i, int j, char col)
{
    if(i < 1 || i > n || j < 1 || j > m)
        return false;
    
    if(arr[i][j] != col)
        return false;

    return true;
}

bool dfs(int i, int j, char col, int parX, int parY)
{
    //cout<<i<<" "<<j<<" "<<parX<<" "<<parY<<" i\n";
    vis[i][j] = 1;
    for(int k=0; k<4; k++)
    {
        int nX= i+dx[k], nY = j+dy[k];
        //cout<<nX<<" "<<nY<<" "<<col<<"\n";
        if(isvalid(nX, nY, col))
        {
            //cout<<nX<<" "<<nY<<" here "<<vis[nX][nY]<<"\n";
            if(vis[nX][nY] == 1)
            {
                //cout<<nX<<" "<<nY<<" "<<i<<" "<<j<<"\n";
                if((nX != parX) || (nY != parY))
                {
                    //cout<<nX<<" "<<nY<<"\n";
                    return true;
                }
            }
            else
            {
                if(dfs(nX, nY, arr[nX][nY], i, j))
                    return true;
            }
            
        }
    }
    return false;
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j = 1; j<=m; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(!vis[i][j])
            {
                //cout<<"call\n";
                if(dfs(i, j, arr[i][j], i, j)== 1)
                {
                    cout<<"Yes\n";  return 0;
                }
            }
        }
    }
    cout<<"No\n";
    return 0;
}
