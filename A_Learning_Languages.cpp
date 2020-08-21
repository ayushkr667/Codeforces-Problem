#include<cstdio>
#define N 110

int f[N];
int a[N][N];
int n, m;
int flag;

int F(int x)
{
	return f[x]==x ? f[x] : f[x]=F(f[x]);
}

int main()
{
	scanf("%d%d",&n,&m);
	for (int i=0; i<n; i++) 
	{
		int x;
		scanf("%d",&x);
		if (x) flag=1;
		for (int j=0; j<x; j++)
		{
			int y;
			scanf("%d",&y);
			a[i][y-1]=1;
		}
		f[i]=i;
	}
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
		{
			if (F(i)==F(j)) continue;
			for (int k=0; k<m; k++)
				if (a[i][k] && a[j][k]) 
				{
					int x=F(i), y=F(j);
					f[x]=y;
				}
		}
	int ans = 0;
	for (int i=0; i<n; i++) 
		if (F(i)==i) 
			ans++;
	printf("%d\n",ans-flag);
	return 0;
}