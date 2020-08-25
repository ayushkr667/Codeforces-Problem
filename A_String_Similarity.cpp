/*-------------------------------*
| Name: Ayush Kumar              |
| College: SOE, CUSAT            |
| Dept: CSE                      |
| Site:                          |
| Email: ayushkr667@gmail.com    |
*-------------------------------*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
const double PI = 3.141592653589793238460;
//ll n, m, t;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        for(int i=0; i<s.size(); i+=2)
        {
            cout<<s[i];
        }
        cout<<"\n";
    }
    

    return 0;
}
