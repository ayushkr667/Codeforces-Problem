#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input2.txt","r",stdin);
    // freopen("output2.txt","w",stdout);
    // #endif
    
    ll t;   cin>>t;
    ll  c =  1;
    while (t--)
    {
        ll n;   cin>>n;
        string s;   cin>>s;
        ll as=0, bs=0;
        for(ll i=0; i<n; i++)
        {
            if(s[i] == 'A')
                as++;
            if(s[i] == 'B')
                bs++;
        }

        cout<<"Case #"<<c<<": ";
        if(abs(as-bs)==1)
            cout<<"Y"<<"\n";
        else
        {
            cout<<"N"<<"\n";
        }
        c++;
    }
    

    return 0;
}
