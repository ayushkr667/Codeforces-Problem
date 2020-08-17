#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
string s;   cin>>s;
int val[4] = {0};
for(int i=0; i<s.size(); i++)
{
    if(s[i]=='h')
    {
        val[0] = 1;
        continue;
    }
    if( s[i]=='e' && val[0] == 1)
    {
        val[1] = 1;
        continue;
    }
    if(s[i]=='l' && val[0] == 1 && val[1] == 1 && val[2]== 0)
    {
        val[2] = 1;
        continue;
    }
    if(s[i]=='l' && val[0] == 1 && val[1] == 1 && val[2]== 1)
    {
        val[2] = 2;
        continue;
    }
    if(s[i]=='o' && val[0] == 1 && val[1] == 1 && val[2]== 2)
    {
        val[3] = 1;
        continue;
    }
}
int flag = 0 ;
for(int i=0; i<4; i++)
{
    if(!val[i])
        flag =1;
}
if(!flag)
    cout<<"YES"<<"\n";
else
{
    cout<<"NO"<<"\n";
}

return 0;
}
