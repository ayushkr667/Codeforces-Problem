#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    string s;
    cin>>s;
    set<int> mp;
    for(int i=0; i<s.size(); i++)
    {
        mp.insert(s[i]-'a');
    }
    int len = mp.size();
    if(len%2 != 0)
        cout<<"IGNORE HIM!"<<"\n";
    else
    {
        cout<<"CHAT WITH HER!"<<"\n";
    }
    
}
