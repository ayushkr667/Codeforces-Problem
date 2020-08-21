#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int flag = 0;
        for(int i=1; i<n; i++)
        {
            if(arr[i]!=arr[0])
            {
                flag = 1; break;
            }
        }

        if(!flag)
            cout<<n<<"\n";
        else
            cout<<1<<"\n";

    }
    return 0;
}
