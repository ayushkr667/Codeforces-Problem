#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
string s;
cin>>s;
ll l = s.size();
int count = 1;
for(ll i=1; i<l; i++)
{
    if(s[i] == s[i-1])
    {
        count++;
        if(count==7)
        {
            cout<<"YES"<<"\n"; break;
        }
    }
    else
    {
        count=1;
    } 
    if( i == l-1 && count < 7)
        cout<<"NO"<<"\n";
}
return 0;
}
