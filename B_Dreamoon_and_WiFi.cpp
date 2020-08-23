#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007

int th(int start,int ques,int finish)
{
    if(ques==0&&start==finish)return 1;
    if(ques==0)return 0;
    int ret=0;
    ret+=th(start+1,ques-1,finish);
    ret+=th(start-1,ques-1,finish);
    return ret;
}


int main()
{
string a,b;
cin>>a>>b;
int val  = 0;
for(int i=0; i<a.size(); i++)
{
    if(a[i] == '+')
        val++;
    if(a[i] == '-')
        val--;
}

int count = 0, val1 = 0;
for(int i=0; i<b.size(); i++)
{
    if(b[i] == '+')
        val1++;
    if(b[i] == '-')
        val1--;
    if(b[i] == '?')
        count++;
}

if((val != val1) && (count==0))
    printf("%.12lf\n",0.0);

else
    {
        int x=th(val,count,val1);
        int pow2=(int)1<<count;
        double prob=(x*1.0)/(pow2*1.0);
        printf("%.12lf\n",prob);
    }
return 0;
}
