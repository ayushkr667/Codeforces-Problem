/*-------------------------------*
| Name: Ayush Kumar              |
| College: SOE, CUSAT            |
| Dept: CSE                      |
| Site: codeforces               |
| Email: ayushkr667@gmail.com    |
*-------------------------------*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define INF (ll) 1e18
const double PI = 3.141592653589793238460;
string str;
int n,k;

int main()
{
    int i,j,cnt,a,b;
    while(cin>>n>>k>>str)
    {
        cnt=0;
        if(k==2)
        {
            a=0;
            b=0;
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    if(str[i]=='B') a++;
                    if(str[i]=='A') b++;
                }
                else
                {
                    if(str[i]=='A') a++;
                    if(str[i]=='B') b++;
                }
            }
            if(a<b)
            {
                cout<<a<<"\n";
                for(i=0;i<n;i++) cout<<((i%2==0)?'A':'B');
                cout<<"\n";
            }
            else
            {
                cout<<b<<"\n";
                for(i=0;i<n;i++) cout<<((i%2!=0)?'A':'B');
                cout<<"\n";
            }
            continue;
        }
        for(i=0; i<n-1; i++)
        {
            if(str[i]==str[i+1] && str[i]==str[i+2])
            {
                for(j=0; j<k; j++)
                {
                    if(str[i+1]!=(j+'A'))
                    {
                        str[i+1]=(j+'A');
                        cnt++;
                        break;
                    }
                }
            }
            else if(str[i]==str[i+1])
            {
                for(j=0; j<k; j++)
                {
                    if(i>0 && str[i-1]!=(j+'A') && str[i]!=(j+'A'))
                    {
                        str[i]=(j+'A');
                        cnt++;
                        break;
                    }
                    else if(i==0 && str[i]!=(j+'A'))
                    {
                        str[i]=(j+'A');
                        cnt++;
                        break;
                    }
                }
            }
        }
        cout<<cnt<<"\n";
        cout<<str;
    }
    return 0;
}