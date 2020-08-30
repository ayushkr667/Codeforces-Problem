/*-------------------------------*
| Name: Ayush Kumar              |
| College: SOE, CUSAT            |
| Dept: CSE                      |
| Site:                          |
| Email: ayushkr667@gmail.com    |
*-------------------------------*/

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
    cin>>n;
    ll arr[n];
    ll sum = 0; 
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr, arr+n);
    ll m = INF;
    ll val;
    for (ll i = 0; i <= 100000; i++)
    {
        //ll temp =  ( 1- pow(i, n-1)) / ( 1-i);
        //m = min (abs(sum - temp), m);
        ll temp =1, sum1 = 0,j;
        for ( j = 0; j < n; j++)
        {
            if(temp>=1000000000000)
				break;
            sum1 += abs(arr[j] - temp);
            temp = temp*i; 
        } 
        if(j < n)
            break;
        if(sum1 < m)
        {
            val =i;
        }
        m = min(sum1, m);
    }
    cout<<m;
    return 0;
}



