#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<string>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<map>
#include<set>
#define bug printf("*********\n");
#define mem0(a) memset(a, 0, sizeof(a));
#define mem1(a) memset(a, -1, sizeof(a));
#define in1(a) scanf("%d" ,&a);
#define in2(a, b) scanf("%d%d", &a, &b);
#define out1(a) printf("%d\n", a);
#define out2(a, b) printf("%d %d\n", a, b);
#define pb(G, a, b) G[a].push_back(b);
using namespace std;
typedef long long LL;
typedef pair<int, int> par;
const int mod = 1e9+7;
const int INF = 1e9+7;
const int N = 1000010;
const double pi = 3.1415926;
 
int n, k;
int a[200010], idx1[200010], idx2[200010];
LL sum[200010], m1[200010], m2[200010];
 
int main()
{
    while(~scanf("%d%d", &n, &k)) {
        sum[0] = 0;
        mem0(m1);
        mem0(m2);
        int l, r;
        LL ans = 0;
        for(int i = 1; i <= n; i ++) {
            in1(a[i]);
            sum[i] = sum[i-1]+a[i]; //prefix and array
        }
                 for(int i = 1; i <= n-2*k+1; i ++) {//Record the forward maximum value and interval position
            if(sum[i+k-1] - sum[i-1] > m1[i+k-2]) {
                m1[i+k-1] = sum[i+k-1] - sum[i-1];
                idx1[i+k-1] = i;
            }else {
                m1[i+k-1] = m1[i+k-2];
                idx1[i+k-1] = idx1[i+k-2];
            }
        }
                 for(int i = n-k+1; i >= k+1; i --) {//behind
            if(sum[i+k-1] - sum[i-1] >= m2[i+1]) {
                m2[i] = sum[i+k-1] - sum[i-1];
                idx2[i] = i;
            }else {
                m2[i] = m2[i+1];
                idx2[i] = idx2[i+1];
            }
        }
        for(int i = k; i <= n-k; i ++) {
                         if(m1[i]+m2[i+1]> ans) {// seek the optimal solution
                ans = m1[i]+m2[i+1];
                l = idx1[i];
                r = idx2[i+1];
            }
        }
        printf("%d %d\n", l, r);
    }
    return 0;
}