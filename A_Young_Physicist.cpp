#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
ll t;  cin>>t;
ll x =0 , y=0, z=0;
while (t--)
{
    int a,b,c;  cin>>a>>b>>c;
    x+=a;
    y+=b;
    z+=c;
}

if(x==0 && y==0 && z==0)
{
    cout<<"YES"<<"\n";
}
else
{
    cout<<"NO"<<"\n";
}


return 0;
}
