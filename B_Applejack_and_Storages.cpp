#include<bits/stdc++.h>
using namespace std;
#define N 100010
int n,m,a[N],cnt2,cnt4,cnt6,cnt8;
int read()
{
    int x=0;char c=getchar();
    while (c<'0'||c>'9') c=getchar();
    while (c>='0'&&c<='9') x=x*10+c-48,c=getchar();
    return x;
}
int main()
{
    n=read();m=100000;
    for (int i=1;i<=n;i++) a[read()]++;
    for (int i=1;i<=m;i++)
    {
        if (a[i]>=2) cnt2++;
        if (a[i]>=4) cnt4++;
        if (a[i]>=6) cnt6++;
        if (a[i]>=8) cnt8++;
    }
    int T=read();
    while (T--)
    {
        char c=getchar();
        int x=read();
        if (c=='+')
        {
            a[x]++;
            if (a[x]==2) cnt2++;
            if (a[x]==4) cnt4++;
            if (a[x]==6) cnt6++;
            if (a[x]==8) cnt8++;
        }
        else
        {
            if (a[x]==2) cnt2--;
            if (a[x]==4) cnt4--;
            if (a[x]==6) cnt6--;
            if (a[x]==8) cnt8--;
            a[x]--;
        }
        if (cnt8>=1||cnt4>=2||cnt6>=1&&cnt2>=2||cnt4>=1&&cnt2>=3) printf("YES\n");else printf("NO\n");
    }
}