#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    ll a, b, s;
    cin>>s>>a>>b;
    if((a*b)>=(6*s))
    {
        cout<<(a*b)<<"\n"<<a<<" "<<b;
        return 0;
    }

    int f =0;
    if( a > b )
    {
        f=1;
        swap(a,b);
    }
    ll ans = 1e18;
    ll a1, b1, temp;
    for(ll i=a; i*i <= 6*s; i++ )
    {
        temp = 6*s / i;

        if(temp*i < 6*s ) temp++;//to cet ceil

        if(temp < b)    continue;

        if((temp*i) < ans)
        {
            ans = temp*i;
            a1 = i;
            b1 = temp;
        }
    }
    if(f)
        swap(a1, b1);
    cout<<ans<<"\n"<<a1<<" "<<b1;
    return 0;
}
