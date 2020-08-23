#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{
ll n, k;
cin>>n>>k;
ll arr[n];
ll sum =0, i;
ll res = INT_MAX,   index = 1;
for(i=0; i<k; i++)
{
    cin>>arr[i];
    sum+=arr[i];
}
res = sum;
//cout<< sum << " "<<index;
for (ll j = i; j < n; j++)  
{
    cin>>arr[j];
    sum = sum + arr[j] - arr[j-k];
    if(sum<res)
    {
        res  = sum;
        index  =(j-k+2);
    }
}
cout<<index;
return 0;
}
