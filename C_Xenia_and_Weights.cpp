#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007

char arr[12];
int dp[12][10001][12]; // dif, length_made, last_used
int ans[10000];

int build(int last, int diff, int length, int ans[], int pos)
{
    if(dp[diff][length][last] != 0) return 1;

    else if(length == 0)
    {
        cout<<"YES"<<"\n";
        for(int i=0;i<pos;i++) cout<<ans[i]<<" ";
        exit(0);
    }

    else
    {
        dp[diff][length][last] = 1;

        for(int i=0; i<=10; i++)
        {
            if(arr[i]=='1' && i+1 != last && i+1 > diff)
            {
                ans[pos] = i+1;
                build(i+1, i+1-diff, length-1, ans, pos+1);
            }
        }
    }
    return 0;  
}



int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin>>arr;
    int m;
    cin>>m;

    int s = build(0,0,m,ans,0);
    cout<<"NO\n";
    return 0;
}
