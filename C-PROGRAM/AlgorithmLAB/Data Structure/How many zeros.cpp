#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 100010
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
ll dp[20][20][2];
int digit[20];
ll func(int pos,int sum,bool pre,bool flag)
{
    int i;
    ll ans=0;
    if(pos==-1)return (sum+pre);

    if(!flag && dp[pos][sum][pre]!=-1)
        return dp[pos][sum][pre];

    int u=flag ? digit[pos] : 9;

    for(i=0 ; i<=u ; i++)
       ans = ans + func( pos-1, sum+( !pre && i==0) , pre && i==0 , flag && i==u );

    if(!flag)
        dp[pos][sum][pre]=ans;

    return ans;
}
ll Cal(ll n)
{
    int len=0;
    while(n)
    {
        digit[len++]=n%10;
        n=n/10;
    }
    func(len-1,0,1,1);
}

///------------------main function-------------------///

int main()
{
    int test, tc=0;
    cin>>test;
    while(test--)
    {
        memset(dp,-1,sizeof(dp));

        ll m, n, ans=0, prior=0, t=0, a, b;

        scanf("%lld %lld", &m, &n);

        ans = Cal(n) - Cal(m-1);

        printf("Case %d: %lld\n", ++tc, ans);
    }
}
