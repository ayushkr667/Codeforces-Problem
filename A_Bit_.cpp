#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
ll t;  cin>>t;
int res = 0;
while(t--)
{
    string s;    cin>>s;
    if(s[1]=='+')
        res++;
    else
        res--;
}
cout<<res<<"\n";
return 0;
}
