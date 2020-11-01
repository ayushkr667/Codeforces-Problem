/*-------------------------------*
| Name: Ayush Kumar              |
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

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m;
    cin>>n>>m;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    int count =0;
    int flag[m] = {0};
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!flag[j])
            {
                if(s[i][j] < s[i+1][j])
                {
                    break;
                }
                if(s[i][j] > s[i+1][j])
                {
                    //cout<<i<<" "<<j<<"\n";
                    count++;    flag[j] = 1;
                    i = -1;  break;
                }
            }
        }  
    }
    cout<<count;
    return 0;
}
