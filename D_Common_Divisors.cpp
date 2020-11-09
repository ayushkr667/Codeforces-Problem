#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
const double PI = 3.141592653589793238460;

char s1[100001], s2[100001];
int n, m, k;
vector<int> d;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>s1>>s2;

    n = strlen(s1), m = strlen(s2);
	k = min(n, m);
 
	for (int i = 1; i*i <= k; i++) 
    {
		if (k%i == 0) 
        {
			d.push_back(i);
			if (i != k / i) d.push_back(k / i);
		}
	}

    int ans = 0;
 
	for (int i = 0; i < d.size(); i++) 
    {
		if (n%d[i] == 0 && m%d[i] == 0) 
        {
			bool flag = 1;
			for (int a = 0, b = 0; a < n; b++, a++) 
            {
				if (b == d[i]) b = 0;
				if (s1[a] != s1[b]) 
                {
					flag = 0;
					break;
				}
			}
			if (flag)
            {
				for (int a = 0, b = 0; a < m; b++, a++) 
                {
					if (b == d[i]) b = 0;
					if (s2[a] != s1[b]) 
                    {
						flag = 0;
						break;
					}
				}
			}
			if (flag) ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
