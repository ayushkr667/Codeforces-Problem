#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
ll t;  cin>>t;
while(t--)
{
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int flag = 0;
    for(int i=1; i<n; i++)
    {
        if((arr[i]-arr[i-1])>1)
        {
            cout<<"NO"<<"\n";
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"YES"<<"\n";
}
return 0;
}
