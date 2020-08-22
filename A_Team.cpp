#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    int n;   cin>>n;
    int res = 0;
    while(n--)
    {
        int a, t=3;
        int temp = 0;
        while(t--)
        {
            cin>>a;
            if(a==1)
                temp++;
        }
        
        if(temp>=2)
            res++;
    }
    cout<<res<<"\n";
    return 0;
}
