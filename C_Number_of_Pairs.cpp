#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define mem1(a) memset(a,-1,sizeof(a))
#define mem0(a) memset(a,0,sizeof(a))
#define all(x) (x).begin(),(x).end()
#define mod 1000000007
#define INF (ll) 1e18
const double PI = 3.141592653589793238460;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void solution()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(all(arr));
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > r)
            continue;

        // l <= a + b <= r
        // tl <= b <= tr
        int tl = l - arr[i];
        int tr = r - arr[i];

        //index of 1st element greater than tr in right
        int up = upper_bound(arr.begin()+i+1, arr.end(), tr) - arr.begin();

        //index of 1st element which is greater than equal to tl
        int low = lower_bound(arr.begin()+i+1, arr.end(), tl) - arr.begin();

        //because up will give 1st element greater than tr
        if( up < n && arr[up] > tr ){
            up--;
        }

        if(up == n && low == n){
            continue; //no element exists
        }

        if(up >= low){
            if(up == n)
                ans += n - low;

            else{
                ans += (up - low) + 1;
            }
        }
    }
    cout << ans << "\n";
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
