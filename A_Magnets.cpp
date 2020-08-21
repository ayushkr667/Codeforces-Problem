#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    int n;  cin>>n;
    int res = 1;
    string a;
    cin>>a;
    n--;
    while(n--)
    {
       string b;    cin>>b;
        if(b[0] == a[1])
            res++;

         a = b;
    }
    cout<<res<<"\n";
    return 0;
}
