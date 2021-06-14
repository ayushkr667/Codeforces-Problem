#include <iostream>
using namespace std;

int main()
{
    int t;  cin >>t;
    while (t--)
    {
        int n; cin >> n;
        int arr[n+1];
        int i_max = 1, i_min = 1, min_val = INT_MAX, max_val = INT_MIN;
        for(int i=1; i<=n; i++){
            cin >> arr[i];
            if( arr[i] >= arr[i_max] )
                i_max= i;
            if( arr[i] <= arr[i_min] )
                i_min = i;
        } 
        // cout << i_max << " " << i_min << "\n";
        int res = max(i_max, i_min);
        // cout << res << "\n";
        res = min(res, max(n-i_max+1, n-i_min+1));
        // cout << res << "\n";
        res = min(res, n-i_max+1 + i_min);
        // cout << res << "\n";
        res = min(res, i_max +  n - i_min + 1);
        cout << res <<"\n";
    }
    
    return 0;
}

