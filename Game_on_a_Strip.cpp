/*-------------------------------*
| Name: Ayush Kumar              |
| College: SOE, CUSAT            |
| Dept: CSE                      |
| Site: codechef                 |
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
    int t; cin>>t;
    while (t--)
    {
        int n;  cin>>n;
        int arr[n] ; 
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int m  =INT_MIN;
        int count = 0;
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 0)
            {
                count++;
            }
            else
            {
                res.pb(count);
                count = 0;
            } 
        }

        sort(res.begin(), res.end(), greater<int>());
        if (res.size() == 0)
        {
            cout << "No" << endl;
        }
        else if (res.size() == 1)
        {
            if (res[0] % 2 == 0)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
        else
        {
            int a = res[0];
            int b = res[1];
            if((a + 1) / 2 == b)
            {
                cout << "No" << endl;
            }
            else if ((a + 1) / 2 > b && a % 2 != 0)
            {
                cout << "Yes" << endl;
            }
            else 
            {
                cout << "No" << endl;
            }       
        }
    }

    return 0;
}
