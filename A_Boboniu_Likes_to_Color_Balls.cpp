#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
int a,b,c,d;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int cnt=0;
        cnt+=(a&1)+(b&1)+(c&1)+(d&1);
        if(cnt<=1)
            cout << "Yes" << endl ;
        else
        {
            if(a==0||b==0||c==0)
            {
                cout << "No" << endl;
                continue;
            }
            a--;
            b--;
            c--;
            d+=3;
            cnt=0;
            cnt+=(a&1)+(b&1)+(c&1)+(d&1);
            if(cnt<=1)
                cout << "Yes" << endl ;
            else
                cout << "No" << endl ;
        }
    }
    return 0;
}
