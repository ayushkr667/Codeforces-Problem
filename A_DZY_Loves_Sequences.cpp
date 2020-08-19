#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<cmath>
using namespace std;
const int maxn=1e5+10;
int n;
//dp1[i] represents the longest single-increasing sequence with i as the right endpoint 
 //dp2[i] represents the longest single-increasing sequence with i as the left endpoint 
int dp1[maxn],dp2[maxn];
int a[maxn]; 
int ans,len;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	    scanf("%d",&a[i]);
	dp1[1]=1;
	for(int i=2;i<=n;++i)
	{
		if(a[i]>a[i-1])dp1[i]=dp1[i-1]+1;
		else dp1[i]=1;
	}
	dp2[n]=1;
	for(int i=n-1;i>=1;--i)
	{
		if(a[i]<a[i+1])dp2[i]=dp2[i+1]+1;
		else dp2[i]=1;
	}
	a[0]=0, a[n+1]=1e9+5;//unified boundary condition, the dp value is still 0 
	for(int i=1;i<=n;++i)
	{
		 if(a[i-1]+2<=a[i+1])
            len=dp1[i-1]+dp2[i+1]+1;// can be connected to two segments 
		 else len=max(dp1[i-1],dp2[i+1])+1;// can only be connected 
		//printf("%d:%d %d %d\n",i,dp1[i-1],dp2[i+1],len);
		ans=max(ans,len); 
	}
	printf("%d\n",ans);
	return 0;
} 