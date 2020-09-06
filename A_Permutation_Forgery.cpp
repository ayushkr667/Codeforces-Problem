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

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        stack<int>st;
        st.empty();
        int n; cin>>n;
        while (n--)
        {
            int a; cin>>a;
            st.push(a);
        }
        while (!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<"\n"; 
    }
    
    return 0;
}
