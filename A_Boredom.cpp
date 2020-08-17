#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n;   cin>>n;
    ll dp[100002] = {0};
    ll ans[100002];
    for(ll i = 0; i<n; i++)
    {
        ll temp; cin>>temp;
        dp[temp]++;
    }

    ans[0] = 0; // if only zero is there    
    ans[1] = dp[1]; //if inly 1 is there answer will be its count

    for(ll i=2; i<=100001; i++)
    {
        //if ith elemented is selected in answer or not
        //if selected its value times its count will added in sum
        ans[i] =  max( ans[i-1], ans[i-2]+dp[i]*i );
    }

    cout<<ans[100001];
    return 0;
}
