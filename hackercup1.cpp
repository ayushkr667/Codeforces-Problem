#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t; cin>>t;
    ll c = 1;
    while(t--)
    {
        ll n;  cin>>n;
        string in, out;
        cin>>in>>out;
        ll res[n][n];
        for(ll i=0; i<n; i++)
        {
            for(ll j=i; j<n; j++)
            {
                if(i==j)
                {
                    res[i][j] = 1;
                }
                else
                {
                    if((res[i][j-1]==1) && (out[j-1]=='Y') && (in[j]=='Y'))
                    {
                        res[i][j] = 1;
                    }
                    else
                    {
                        res[i][j] = 0;
                    }

                }

            }
            for(ll j = i-1; j>=0; j--)
            {
                if((res[i][j+1]==1) && (out[j+1]=='Y') && (in[j]=='Y'))
                {
                    res[i][j] = 1;
                }
                else
                {
                    res[i][j] = 0;
                }

            }
        }
        cout<<"Case #"<<c<<":"<<"\n";
        c++;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(res[i][j])
                    cout<<"Y";
                else
                {
                    cout<<"N";
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}
