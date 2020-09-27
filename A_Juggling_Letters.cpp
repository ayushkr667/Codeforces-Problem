
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define INF (ll) 1e18
const double PI = 3.141592653589793238460;
ll n, m, t;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int arr[50];
    cin>>t;
    while (t--)
    {
        memset(arr, 0, sizeof(arr));
        cin>>n;
        int num = n;
        while (n--)
        {
            string s; cin>>s;
            for(int i = 0; i<s.size(); i++)
            {
                arr[s[i]-'a']++;
            }
        }
        int flag = 0;
        for(int i =0; i<=30; i++)
        {
            if(arr[i])
            {
                if(arr[i]%num !=0 )
                {
                    flag = 1;
                }
            }
        }
        if(flag)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
        } 
    }
    return 0;
}
