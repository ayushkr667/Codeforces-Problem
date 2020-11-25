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

void solution()
{
    int n, k;   cin>>n>>k;
    string s;   cin>>s;
    int sheet[n] = {0};
    int block[n] = {0};
    if(s[0] == ':')
        sheet[0] = 1;
    if(s[0] == 'X')
        block[0] = 1;
    for (int i = 1; i <n; i++)
    { 
        if(s[i] == ':')
            sheet[i] = sheet[i-1] + 1;
        else
        {
            sheet[i] = sheet[i-1];
        }

        if(s[i] == 'X')
            block[i] = block[i-1] + 1;
        else
        {
            block[i] = block[i-1];
        }
        
    }
    int i=0, m=0, answer = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'I')
        {
            //cout<<i<<" --"<<m<<" \n";
            while ( m < n)
            {
                if(s[m] == 'M')
                {
                    int conducting_sheet = abs(sheet[i] - sheet[m]);
                    int power = k + 1 - abs(m - i) - conducting_sheet;
                    //cout<<i<<" "<<m<<"trial\n";
                    if(power > 0 && m < n && (abs(block[m] - block[i]) == 0))
                    {
                        //cout<<i<<" "<<m<<"final\n";
                        answer++;
                        m++;
                        break;
                    }
                    if(power > 0 && m < n && (abs(block[m] - block[i]) != 0))
                    {
                        if(m < i)
                        {
                            m++;    continue;
                        }
                        else if( m >= i)
                        {
                            //cout<<"from \n";
                            break;
                        }
                    }
                    else if( power <= 0 && i < m)
                    {
                        break;
                    }
                }
                //cout<<"inc\n";
                m++;
            }
        }
    }
    //cout<<"\n";
    cout<<answer<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    for(int i=1; i<=t; i++)
    {
        solution();
    }
    return 0;
}
