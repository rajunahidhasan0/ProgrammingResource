#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n,s;
    //freopen("test.in","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);
        s=0;
        for(i=0;i<n;i++){
            scanf("%d",&a);
            if(a>0)s+=a;
        }

        printf("Case %d: %d\n",++cn,s);
    }
    return 0;
}
