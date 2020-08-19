#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
int s, n;
cin>>s>>n;
int flag=0;
vector<pair<int, int> > vect;
while(n--)
{
    int x,y;    cin>>x>>y;
    vect.pb(make_pair(x,y));
}
sort(vect.begin(), vect.end());
for(int i=0; i<vect.size(); i++)
{
    if(vect[i].first  >=  s)
    {
        cout<<"NO"<<"\n";
        flag = 1;    break;
    }
    s+=vect[i].second;
}
if(flag == 0)
    cout<<"YES"<<"\n";
return 0;
}
