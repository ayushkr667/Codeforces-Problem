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
ll n, m, t;
void solve()
{  
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"1 1"<<"\n";
        cout<<"0"<<"\n";
        cout<<"1 1"<<"\n";
        cout<<"0"<<"\n";
        cout<<"1 1"<<"\n";
        cout<<-a[0]<<"\n";
 
    }
    else
    {
        cout<<"1 1"<<"\n";
        cout<<-a[0]<<"\n";
        a[0]=0;
        cout<<"2 "<<n<<"\n";
        for(int i=1;i<n;i++)
        {
            if(i>1)
                cout<<" ";

            ll len=n-1LL;
            ll val=(a[i]%n)*len;
            a[i]+=val;
            cout<<val;
        }
        cout<<"\n";
        cout<<"1 "<<n<<"\n";
        for(int i=0;i<n;i++)
        {
            if(i>0)
                cout<<" ";

            cout<<-a[i];
        }
        cout<<"\n";
    }
    return;
}

int main()
{
        
    solve();
    return 0;
}
 
