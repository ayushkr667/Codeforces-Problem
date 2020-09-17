#include<bits/stdc++.h>
using namespace std;
int num[10];
int main()
{
    int v,mmin = 1e7;
    cin>>v;
    for (int i = 1;i < 10;i ++)
    {
        cin>>num[i];
        if (num[i] <= mmin) mmin = num[i];
    }
    if (v < mmin)
    {
        cout<<"-1";
        return 0;
    }
    int t = v / mmin;
    while (t --)
    {
        for (int i = 9;i >= 1;i --)
        {
            if (v >= num[i] && (v - num[i]) / mmin >= t)
            {
                cout<<i;
                v -= num[i];
                break;
            }
        }
    }
    cout<<"\n";
    return 0;
}
