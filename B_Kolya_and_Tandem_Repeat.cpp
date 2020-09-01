#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int n,len,k,ans;
int main()
{
    string s;
    char ch[1001];
    cin>>s;
    scanf("%d",&k);
    len=s.length();
    for (int i=len;i>=1;i--)
      ch[i]=s[i-1];

    for (int s=1;s<=len;s++)
        for (int i=1;i<=len-s+1;i++)
        {
            if (s-1+2*i>len+k) break;
            bool mark=0;
            for (int j=s+i;j<=min(len,s+i*2-1);j++)
                if (ch[j-i]!=ch[j]) {mark=1;break; }
                
            if (!mark) ans=max(i,ans);
        }
    if (k>len) ans=max(ans,(k+len)>>1);
    printf("%d",ans*2);
}