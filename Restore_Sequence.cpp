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
vector<ll> vect;
void SieveOfEratosthenes(ll n) 
{  
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (ll p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (ll i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (ll p=2; p<=n; p++) 
       if (prime[p]) 
        {
           vect.pb(p);
        }
} 

void solution()
{
    ll index =0;
    ll n; cin>>n;
    ll brr[n+1], arr[n+1] = {0};
    for (ll i = 1; i <=n ; i++)
    {
        cin>>brr[i];
    }
    
    for (ll i = n; i >=1; i--)
    {
        if(brr[i] == i)
        {
            arr[i] = vect[index];
            index++;
        }
        else
        {
            arr[i] = arr[brr[i]];
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
}




int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    SieveOfEratosthenes(2000000);
    int t; cin>>t;
    //cout<<"here";
    for(int i=1; i<=t; i++)
    {
       solution();
    }
    return 0;
}
