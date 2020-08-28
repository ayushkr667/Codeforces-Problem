#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
ll num[1000001];
int main()
{

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    memset(num,0,sizeof(num));
    ll k;   cin>>k;
    string s;   cin>>s;
    num[0] = 1;
    ll cnt =0, sum = 0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '1') cnt++;
        if(cnt >= k)  sum+=num[cnt-k];
        num[cnt]++;
    }

    cout<<sum;
    return 0;
}
