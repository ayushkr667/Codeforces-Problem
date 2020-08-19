#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
ll n,k;
cin>>n>>k;

ll mid;
if(n%2!=0)
  mid = (n/2)+1;
else
{
    mid = n/2;
}

if(k<=mid)
    cout<<(2*k)-1<<"\n";
else
{
    cout<<2*(k-mid)<<"\n";
}


return 0;
}
