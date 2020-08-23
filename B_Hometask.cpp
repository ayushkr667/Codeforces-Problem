#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <memory.h>
using namespace std;
vector < int > v0 ,v, v1 , v2 ;
int freq[20];
int main() {
    int n ;
    long long sum = 0;
    cin >> n ;
    bool yes = 0;
    while(n--){
        int y ;
        cin >> y;
        sum += y;
        if(y != 0)yes = 1;
        freq[y]++;
    }
    if(freq[0] == 0){
        cout << -1;
        return 0;
    }
    if(!yes){
        cout << 0 ;
        return 0;
    }
    while(sum % 3 != 0)
    {
        bool ok = 0 ;
        if(sum % 3 == 1){
            for(int i = 1 ; i < 10 ; i+=3)
            {
                if(freq[i] != 0)
                {
                    freq[i]--;
                    sum -=i;
                    ok = 1;
                    break;
                }
            }
        }
        
        if(sum % 3 == 2 || !ok)
        {
            for( int i = 2 ; i < 10 ; i+=3)
            {
                 if(freq[i] != 0)
                 {
                    freq[i]--;
                    sum -=i;
                    ok = 1;
                    break;
                }
            }
        }

        if(!ok)
        {
            for(int i = 1 ; i < 10 ; i+=3)
            {
                if(freq[i] != 0)
                {
                    freq[i]--;
                    sum -=i;
                    ok = 1;
                    break;
                }
            }
        }
    }
    yes = 0;
    for(int i = 1 ; i < 10 ; i++)
    {
        if(freq[i] != 0)
            yes = 1;
    }
    if(!yes)
    {
        cout << 0 ;
        return 0;
    }
    for( int i = 9 ; i >= 0 ; i--)
    {
        for(int j = 0 ; j < freq[i] ; j++)
        {
            cout << i ;
        }
    }
	return 0;
}