#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int dp[1000009];


int f(int n)
{
    int r;
    if(dp[n]) return dp[n];
    if(n<=100){
        r=f(f(n+11));
    }
    else {
        r=n-10;
    }
    return dp[n]=r;
}
int main()
{
    int i,j,a,b,ts,cn=0,n;
    //freopen("test.txt","r",stdin);
    //scanf("%d",&ts);
    while(1){
        scanf("%d",&n);
        if(!n)break;

        printf("f91(%d) = %d\n",n,f(n));
    }
    return 0;
}
