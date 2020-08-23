#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;  cin>>t;
    while(t--)
    {
        int n,m;    cin>>n>>m;
        int res = 0;
        int arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                char temp; cin>>temp;
                if((j==m-1)&&(temp=='R'))
                {
                    res++;
                }
                if((i==n-1)&&(temp=='D'))
                {
                    res++;
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}
