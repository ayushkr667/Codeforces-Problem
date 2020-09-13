

#include <bits/stdc++.h>

using namespace std;
int const N = 3e4 + 10;
int n, d, a[N], dp[N][600];

int rec(int cur, int off) 
{
  if(cur >= N)
    return 0;
  
  int &ret = dp[cur][300 + off];

  if(ret != -1)
    return ret;

  ret = 0;

  if(cur + d + off - 1 > cur)
    ret = max(ret, rec(cur + (d + off - 1), off - 1) + a[cur]);

  ret = max(ret, rec(cur + d + off, off) + a[cur]);
  ret = max(ret, rec(cur + (d + off + 1), off + 1) + a[cur]);

  return ret;
}

int main() 
{
  cin>>n>>d;
  for(int i = 0, tmp; i < n; ++i) 
  {
    cin>>tmp;
    ++a[tmp];
  }
  memset(dp, -1, sizeof dp);
  cout<<rec(d, 0);
  return 0;
}