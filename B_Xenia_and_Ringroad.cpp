#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
ll n,m;  cin>>n>>m;
ll a;   cin>>a;
ll res = a-1;
m--;
while(m--)
{
    ll temp; cin>>temp;
    if(temp>a)
    {
        res+=(temp-a);
    }
    if(temp < a)
    {
        res+=(n-a+temp);
    }
    a = temp;
}
cout<<res<<"\n";
return 0;
}
