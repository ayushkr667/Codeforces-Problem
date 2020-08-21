#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{
ll n; cin>>n;
ll arr[n];
ll sum  = 0;
ll m = 0;
for (ll i  = 0; i < n; i++)
{
    cin>>arr[i];
    m = max(m,arr[i]);
    sum+=arr[i];
}
//let total game be x;
// ith person can be supervisor at max x-ai time
//so x <= sum os all x-ai
// x <= (n*x)-sum 
// sum >= (n-1)*x
// x<= sum/n-1;
// for min x= sum/(n-1);
ll res = sum/(n-1);
if(sum%(n-1)!=0)
{
    res++;
}
res = max(res, m);
cout<<res<<"\n";
return 0;
}
