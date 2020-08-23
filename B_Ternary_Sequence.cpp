#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
const double PI = 3.141592653589793238460;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        ll x1, y1, z1, x2, y2, z2;
        cin>>x1>>y1>>z1;
        cin>>x2>>y2>>z2;
        ll total = x1+y1+z1;
        ll zero = max(x1, x2);
        if(total==zero)
        {
            cout<<0<<"\n"; 
            continue;
        }
        ll sum = 0;
        ll temp = min(z1, y2); 
        sum += 2*temp;
        z1-=temp;
        y2-=temp;
        
        temp = min(z1, z2);
        z1-= temp;  z2-=temp;

        temp = min(x1, z2);
        x1-=temp;   z2-=temp;

        sum-=2*min(y1, z2);
        cout<<sum<<"\n";
    }
    
    return 0;
}
