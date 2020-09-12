#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007

using namespace std;
 
int n, k, d;
int dp[110][3];
bool mark[110][3];
 
int rec(int n, bool flag)
{
    if (n == 0)
        if (flag)
            return 1;
        else
            return 0;
    if (n < 0)
        return 0;
    if (mark[n][flag])
        return dp[n][flag];
    mark[n][flag] = true;
    for (int i = 1; i <= k; i++)
        if (i >= d)
            dp[n][flag] = (dp[n][flag] + rec(n - i, 1)) % mod;
        else
            dp[n][flag] = (dp[n][flag] + rec(n - i, flag)) % mod;
    return dp[n][flag];
}
 
int main()
{
    cin >> n >> k >> d;
    cout << rec(n, 0) << endl;
    return 0;
}
