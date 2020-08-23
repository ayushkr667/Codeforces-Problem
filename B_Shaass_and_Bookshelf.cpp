#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007

int d[3][101];
int l1, l2; // l1 and l2 will give length if each
int ans = INT_MAX;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;  cin>>n;

    for(int i=0; i<n; i++)
    {
        int t,w;
        cin>>t>>w;
        if(t==1)
            d[1][l1++] = w;
        if(t==2)
            d[2][l2++] = w;
    }

    sort(d[1], d[1]+l1);
    sort(d[2], d[2]+l2);

    //select each pair v1 of 1 width and v2 of 2 width
    for(int v1=0; v1 <= l1; v1++)
    {
        for (int v2 = 0; v2 <= l2; v2++)
        {
            int s= 0;
            //add all the width of remaining
            //as we took from last to decrease 
            //s
            for(int i=0; i<l1-v1; i++)
                s+= d[1][i];

            for(int i=0; i<l2-v2; i++)
                s+= d[2][i];

            if((v1+(2*v2) >= s) && (ans > (v1 + 2*v2)))
                ans =  v1 + (2*v2);

        }
        
    }
    cout<<ans;

    return 0;
}
