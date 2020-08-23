#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007

ll sum ( ll  k )
{
    return (k*(k+1))/2;
}

ll sum (ll s, ll e)
{
    if(s <= 1)
        return sum(e);//total

    else
    {
        return sum(e) - sum(s-1);
    }
    
}


ll splitter (ll k, ll n)
{
    ll l = 1, r = k;
    while (l<r)
    {
        ll mid = (l+r)/2;
        ll s = sum(mid, k);//it will give sum of mid to k 

        if(s==n)
        {
            return k-mid+1;
        }

        if( s > n)
        {
            l = mid+1;
        }

        else
        {
            r = mid;
        }
    }
    return k-l+2;//1 extra for remaining in left half 
}





int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    ll n, k;
    cin>>n>>k;

    if(n == 1)
		cout<<0<<"\n";		// already just 1 out flow source exist
	else if(n <= k)
		cout<<1<<"\n";
    else
    {
        //as every time we connect 2 splitter 1 outlet gets blocked;
        //decrease 1 from each splitter
        k--;
        n--; // it is 1 more

        if( sum(k) < n )
            cout<<-1<<"\n";

        else
        {
            cout<<splitter(k, n)<<"\n";
        }
        
    }

    return 0;
}
