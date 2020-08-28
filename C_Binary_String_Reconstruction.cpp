/*-------------------------------*
| Name: Ayush Kumar              |
| College: SOE, CUSAT            |
| Dept: CSE                      |
| Site:                          |
| Email: ayushkr667@gmail.com    |
*-------------------------------*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
const double PI = 3.141592653589793238460;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, t, x;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        cin>> x;
        char res[s.size()];
        n = s.size();
        for(int i=0; i<s.size(); i++)
        {
            res[i] ='2';
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '0')
            {
                if(i-x >= 0)
                {
                    res[i-x] = '0'; 
                }
                if(i+x < n)
                {
                    res[i+x] = '0';
                }
            }
        }
        
        int flag = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                if(i-x >= 0 )
                {
                    if(res[i-x] != '0')
                        res[i-x] = '1';
                    else
                    {
                        flag =1;
                    }
                     
                }
                if(i+x < n)
                {
                    if(res[i+x] != '0')
                        res[i+x] = '1';
                    else
                    {
                        flag =1;
                    } 
                }
                if(i-x>=0 && i+x < n)
                {
                    if((res[i-x] != '0') || (res[i+x]!='0'))
                        flag = 0;
                }
                if(i-x < 0 && i+x >= n) flag =1;
                if(flag)
                {
                    break;
                }
            }
        }
        //cout<<"flag"<<flag<<"\n";
        if(flag)
            cout<<"-1\n";
        else
        {
            for(int i=0; i<n; i++)
            {
                if(res[i] == '2')
                {
                    res[i] ='1';
                }
                cout<<res[i];
            }
            cout<<"\n";
        }
    }
    
    return 0;
}
