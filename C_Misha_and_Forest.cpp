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

int n, m, t;
const int MAX = 2e5 + 5;
int d[MAX],sum[MAX],ans;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    queue<int> q;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>d[i]>>sum[i];
        ans+=d[i];
        if(d[i] == 1)
            q.push(i);
    }
    cout<<ans/2<<"\n";//no.edges = sum of degreess/2
    while (!q.empty())
    {
        int u = q.front(); q.pop();

        if(d[u]==0) continue;  

        int v = sum[u]; //as when degree is 1 only one node is adjacent to it so ,v = sum;
        sum[v] = sum[v] ^ u; //as (a^b)^b = a; make u out of sum of v
        d[v]--; //decrease the degree
        //print the edge
        cout<<u<<" "<<v<<"\n";
        //again push in queue if degree is 1
        if(d[v] == 1)
            q.push(v);
    }
    return 0;
}
