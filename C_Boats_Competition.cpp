#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void equalsum(int A[], int n) 
{ 

	map<int, vector<pair<int, int> > > mp; 

	for (int i = 0; i < n - 1; i++) 
    { 
		for (int j = i + 1; j < n; j++) 
        { 
			pair<int, int> p = make_pair(i, j); 

			mp[A[i] + A[j]].push_back(p); 
		} 
	} 
    int vis[n];
    int res = INT_MIN;
    
	for (auto itr = mp.begin(); itr != mp.end(); itr++) 
    { 
		if (itr->second.size() > 1) 
        { 
            int temp = 0;
            for(int i=0; i<n; i++)
            {
                vis[i] = 0;
            }
			for (int i = 0; i < itr->second.size(); i++) 
            { 
                if(vis[itr->second[i].first]==0 && vis[itr->second[i].second]==0)
                {
                    vis[itr->second[i].first]=1;
                    vis[itr->second[i].second]=1;
                    temp++;
                }
			} 
			
            res = max(res, temp);
		} 
	}
    cout<<res<<"\n"; 
} 


int main()
{
ll t;  cin>>t;
while(t--)
{
    int n; cin>>n;
    int w[n];
    for(int i=0; i<n; i++)
        cin>>w[i];
    
    equalsum(w,n);
}
return 0;
}
