/*-------------------------------*
| Name: Ayush Kumar              |
| Site:                          |
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
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int main() 
{
    ios_base::sync_with_stdio(false);   cin.tie(NULL);  cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) 
    {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
 
        if (max(a - n, x) < max(b - n, y)) 
        {
            ll newA = max(a - n, x);
            n -= (a - newA);
            ll newB = max(b - n, y);
            cout << newA * newB <<"\n";
        } 
        else 
        {
            swap(a, b); swap(x, y);
            ll newA = max(a - n, x);
            n -= (a - newA);
            ll newB = max(b - n, y);
            cout << newA * newB <<"\n";
        }
    }
    return 0;
}
