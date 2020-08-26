/*-------------------------------*
| Name: Ayush Kumar              |
| College: SOE, CUSAT            |
| Dept: CSE                      |
| Site: codeforces               |
| Email: ayushkr667@gmail.com    |
*-------------------------------*/

#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
typedef long long ll;

 
int main()
{
	int a,b,c,d,e,f;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		int ans=0;
		ans=min(a,min(b,c));
		if(ans==0)
		{
			cout<<a/3+b/3+c/3<<endl;
			continue;
		}
		a-=ans;
		b-=ans;
		c-=ans;
		ans+=a/3+b/3+c/3;
		if(a%3+b%3+c%3==4)
			ans++;//compensation for greed 
		printf("%d\n",ans);
	}
	return 0;
 } 