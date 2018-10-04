#include<cstdio>
using namespace std;
typedef long long ll;
#define y2 yy2
int T,n,q,A[100],s[21][21];
ll Solve(int x,int y)
{
    ll ans=(ll)(x/n)*(y/n)*s[n][n];
    ans+=(ll)(x/n)*s[n][y%n]+(ll)(y/n)*s[x%n][n]+s[x%n][y%n];
    return ans;
}
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d",&A[i]);
        int res=0;
        for(int i=1;i<=4*n+1;i++)
            for(int j=1;j<=i;j++)
            {
                if(j<=2*n&&i-j+1<=2*n)s[j][i-j+1]=A[res];
                res=(res+1)%n;
            }
        n*=2;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                s[i][j]=s[i][j]+s[i-1][j]+s[i][j-1]-s[i-1][j-1];
        scanf("%d",&q);
        while(q--)
        {
            int x1,x2,y1,y2;
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
            printf("%lld\n",Solve(x2+1,y2+1)+Solve(x1,y1)-Solve(x1,y2+1)-Solve(x2+1,y1));
        }
    }
    return 0;
}

