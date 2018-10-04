#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n,ar[10000],q,m,x;
    freopen("test.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        scanf("%d",&q);
        for(j=0;j<q;j++){
            scanf("%d",&m);
            //m=111;
            x=ar[0]%m;
            for(i=1;i<n;i++){
                b=ar[i]%m;
                x=x^b;
            }
            P(x)
        }

        printf("Case %d:\n",++cn);
    }
    return 0;
}
