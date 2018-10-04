#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n,m;
    //freopen("test.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d",&m,&n);
        if(m==1)m++;
        n=n-m+1;

        printf("Case %d: ",++cn);
        if(n%2)puts("Odd");
        else puts("Even");
    }
    return 0;
}
