#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{

ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
int n;  cin>>n;
int arr[n];
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}
if(n<=2)
{
    cout<<n<<"\n";  return 0;
}

int res = 0;
vector<map<int, int> > dp(n);
        
for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
            int diff = arr[i]+arr[j];
                dp[i][diff] = dp[j].count(diff) > 0 ? dp[j][diff] + 1 : 2;
                res = max(res, dp[i][diff]);
            }
        }

cout<<res<<"\n";
return 0;
}








