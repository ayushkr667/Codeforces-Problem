#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{
ll n; cin>>n;
ll arr[n];
for (ll i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr, arr+n);
ll res =0;
for (ll i = 1; i <= n; i++)
{
    res+=abs(i-arr[i-1]);
}
cout<<res<<"\n";

return 0;
}
