#include <iostream>
using namespace std;

int main()
{
    int t;  cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int arr[n];
        int sum = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        if(sum%n != 0){
            cout << -1 <<"\n";
            continue;
        }
        int res= 0;
        for(int i=0; i<n; i++){
            if(arr[i] > sum/n){
                res++;
            }
        }
        cout << res << "\n";
    }
    

    return 0;
}
