/*-------------------------------*
| Name: Ayush Kumar              |
| College: SOE, CUSAT            |
| Dept: CSE                      |
| Email: ayushkr667@gmail.com    |
*-------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int n,k,l,r,sum,f;
int a[100010],b[100100];
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
        
    int p=2;
    for(int i=1;i<=n;i++)
    {
        if(b[a[i]])
            continue;
        b[a[i]]=1;
        sum++;
        if(sum==k)
        {
            r=i;
            f=1;
            break;
        }
    }
    memset(b,0,sizeof(b));
    sum=0;
    for(int i=r;i>=1;i--)
    {
        if(b[a[i]])
            continue;
        b[a[i]]=1;
        sum++;
        if(sum==k)
        {
            l=i;
            break;
        }
    }
    if(f)
        cout<<l<<" "<<r<<endl;
    else
        cout<<-1<<" "<<-1<<endl;
    return 0;
}
