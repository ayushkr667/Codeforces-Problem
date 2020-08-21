#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
string a,b;
cin>>a>>b;
for(int i=0; i<a.size(); i++)
{
    a[i]  =  tolower(a[i]);
}

for(int i=0; i<b.size(); i++)
{
    b[i]  =  tolower(b[i]);
}

if(a<b)
    cout<<"-1"<<"\n";
else if(a>b)
    cout<<"1"<<"\n";
else
{
    cout<<"0"<<"\n";
}

return 0;
}
