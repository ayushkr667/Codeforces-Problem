/*-------------------------------*
| Name: Ayush Kumar              |
| College: SOE, CUSAT            |
| Dept: CSE                      |
| Site: codeforces               |
| Email: ayushkr667@gmail.com    |
*-------------------------------*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
const double PI = 3.141592653589793238460;
ll n, m, t;
ll sum;
ll solve(ll p, ll f, ll ts, ll tw, ll s, ll w)
{
   if(s > w)
   {
       //assumed as sword is lighter
       swap(s, w);
       swap(ts, tw);
   }
   ll ans = 0;
   //first person can take 0, to ts sword 
   for (ll i = 0; i <= ts; i++)
   {
        if(i*s > p)
            continue;//if weight is over
        ll swordfirst = i; //first persons sword
        ll swordsecond = min(ts-i, f/s);

        ll leftfirst = p - (swordfirst * s);
        ll leftsecond = f - (swordsecond * s);

        ll firstAxes = min(leftfirst/w, tw);//first can carry axes
        ll secondAxes = min(leftsecond/w, (tw-firstAxes));

        ans = max(ans, swordfirst + swordsecond + firstAxes + secondAxes);

   }
   return ans;
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>t; 
    while (t--)
    {
        sum=0;
        ll p, f;//weight each can carry
        cin>>p >>f;
        ll ts, tw;//number of swors and axes
        cin>>ts>>tw;
        ll s, w;//weight of sword and axes
        cin>>s>>w;
        cout<<solve(p, f, ts, tw, s, w)<<"\n";
    }
    
    return 0;
}
