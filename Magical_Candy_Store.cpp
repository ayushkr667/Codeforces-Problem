/********************
*             __    *
*   OHM   |__|__    *
*          __|  |   *
*                   *
*********************/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define INF (ll) 1e18
const double PI = 3.141592653589793238460;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void solution()
{
    ll n; cin>>n;
    ll arr[n+1];
    for(int i =1; i<=n; i++)
    {
        cin>>arr[i];
        //cout<<arr[i]<<" ";
    }
    //cout<<"\n";
    ll ans[100011] = {0};
    ans[0] = 0;
    bool flag = true;
    ll sum = 0;
    for (int i = 1; i <= 100010; i++)
    {
        ll temp = arr[(i-1)%n + 1];
        if(temp == 1)
        {
            if((i-1)%n + 1 == 1)
            {
                if(i == 1)
                {
                    ans[i] = 1;
                }
                else
                {
                    ans[i] = (ans[i-1] + 1)%mod;
                }
                flag = false;
            }
            else if((i-1)%n + 1 == n)
            {
                ans[i] = (ans[i-1] + 1)%mod;
            }
            else
            {
                if(arr[(i-1)%n]%2 == 0)
                {
                    ans[i-1]--;
                    ans[i] = ans[i-1];
                }
                
                else
                {
                    ans[i-1]++;
                    ans[i] = ans[i-1];
                }
            }
        }
        else
        {
            if(temp % 2 == 0 && flag == true)
            {
                if(((i-1)%n + 1) == n)
                    ans[i] = (ans[i-1] + temp -1)%mod;
                
                else
                {
                    ans[i] = (ans[i-1] + temp)%mod;
                }
                
            }
            else if(temp % 2 != 0 && flag == true)
            {
                if(((i-1)%n + 1) == n)
                    ans[i] = (ans[i-1] + temp)%mod;
                else
                {
                    ans[i] = (ans[i-1] + temp - 1)%mod;
                }
            }
            else
            {
                ans[i] = ans[i-1];
            }
        }
    }    
    for (int i=1; i <= 6 ; i++)
    {
        //cout<<ans[i]<<"->"<<i<<" ii\n";
    }
    ll q; cin>> q;
    while (q--)
    {
        ll tt;
        cin >> tt;
        //cout<<arr[(tt-1)%n + 1]<<"here\n";
        if(tt ==1 )
        {
                cout<<arr[1]<<"\n";
        }
        else if( arr[(tt-1)%n + 1] == 1 )
        {
            if((tt-1)%n + 1 == 1)
            {
                cout<<ans[tt] - 1<<"\n";
            }
            else if((tt-1)%n + 1 == n)
            {
                cout<<ans[tt]<<"\n";
            }
            else
            {
                if(arr[(tt-1)%n]%2 == 0)
                    cout<<ans[tt]+2<<"\n";
                else
                {
                    cout<<ans[tt]<<"\n";
                }
            }
        }
        else if((arr[(tt-1)%n + 1] % 2 != 0) && ((tt-1)%n  +1) != 1 && ((tt-1)%n  +1) != n)
        {
            if(arr[(tt-1)%n + 2] == 1 && (tt-1)%n + 2 == n)
                cout<<ans[tt] + 1<<"\n";
            else if(arr[(tt-1)%n + 2] == 1)
                cout<<ans[tt]<<"\n";
            else if(arr[1] != 1)
                cout<<ans[tt] + 1<<"\n";  
            else
            {
               cout<<ans[tt]<<"\n";
            }
        }
        else if((arr[(tt-1)%n + 1] % 2 == 0) && ((tt-1)%n  +1) != 1 && ((tt-1)%n  +1) != n)
        {
            if(arr[(tt-1)%n + 2] == 1 && (tt-1)%n + 2 != n)
                cout<<ans[tt]  + 1<<"\n";
            else
            {
                cout<<ans[tt] <<"\n";
            } 
        }
        else if(((tt-1)%n + 1 == 1) && (arr[(tt-1)%n + 1] % 2 != 0))
        {
            cout<<ans[tt]  + 1<<"\n";
        }
        else if(((tt-1)%n + 1 == 1) && arr[(tt-1)%n + 1]%2 == 0 && (tt-1)%n + 2 <= n && arr[(tt-1)%n  +2] == 1 )
        {
            cout<<ans[tt] + 1<<"\n";
        }
        
        else if(((tt-1)%n + 1 == n) && arr[(tt-1)%n + 1] % 2 == 0)
        {
            cout<<ans[tt]  + 1<<"\n";
        }
        else
        {
            cout<<ans[tt]<<"\n";
        }
        
    }  
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    for(int i=1; i<=t; i++)
    {
        solution();
        //cout<<"case: "<<i<<"\n";
    }
    return 0;
}