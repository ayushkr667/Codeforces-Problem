#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod  100000000
int h, n, k1, k2;
//dp[no of horse remain] 
//[noof foot remain] [ consecutive h used]
// [ consecutive foot used ]
int dp[102][102][11][11];
int solve(int rh, int rp, int conh, int conp)
{
    if(dp[rh][rp][conh][conp] != -1)
        return dp[rh][rp][conh][conp];

    else if(rh==0 && rp==0)
        return 1;

    else
    {
        dp[rh][rp][conh][conp] = 0;
        if( rh > 0 && conh < k1)
        {
            dp[rh][rp][conh][conp] += solve(rh-1, rp, conh+1, 0);
            dp[rh][rp][conh][conp]%=mod;
        }

        if(rp>0 && conp<k2)
        {
            dp[rh][rp][conh][conp]+= solve(rh,rp-1,0,conp+1);
            dp[rh][rp][conh][conp]%=mod;
        }

        return dp[rh][rp][conh][conp];
    }
    
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>h>>n>>k1>>k2;
    memset(dp, -1, sizeof(dp));

    cout<<solve(h, n, 0, 0);
    return 0;
}
