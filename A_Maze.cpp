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
const double PI = 3.141592653589793238460;
int n, m, k;
char arr[500][500];
int vis[500][500];

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

stack< pair<int , int> >res;
bool isValid(int i, int j)
{
    if(i < 0 || i >=n || j < 0 || j >=m)
        return false;

    if(arr[i][j] == '#' || vis[i][j] == 1)
        return false;

    return true;
}

void dfs(int x, int y)
{
    res.push(mp(x, y));
    vis[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(isValid(nx, ny))
        {
            dfs(nx, ny);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>n>>m>>k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if( arr[i][j] == '.' && (!vis[i][j]))
                dfs(i,j);
        }   
    }
    
    while (k--)
    {
        pair<int, int> p;
        int a = res.top().first;
        int b = res.top().second;
        res.pop();
        arr[a][b] = 'X';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
