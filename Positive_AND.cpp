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

bool ifpowerof2(int n)
{
    if(ceil(log2(n)) - floor(log2(n)) > 0)
        return false;
    
    return true;
}


void solution()
{
    int n; cin>>n;
    if(n==1)
    {
        cout<<1<<"\n";return;
    }
    if(ifpowerof2(n))
    {
        cout<<"-1\n";return;
    }
    else
    {
        if( n==3)
        {
            cout<<2<<" "<<3<<" "<<1<<"\n";
            return;
        }
        else
        {
            cout<<2<<" "<<3<<" "<<1<<" ";
            for(int i = 4 ; i<=n; i++)
            {
                if(ifpowerof2(i))
                {
                    cout<<i+1<<" "<<i<<" ";
                    i++;
                }
                else
                {
                    cout<<i<<" ";
                }  
            }
            cout<<"\n";
        }  
    } 
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t =1; cin>>t;
    for(int i=1; i<=t; i++)
    {
        solution();
    }
    return 0;
}
