#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n,m,a,b,cnt=0;
	cin>>n>>m;
	for (b=0;b<=m*m;b++)
	{
		a=m-b*b;
		if(a*a+b==n&&a>=0)
			cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}