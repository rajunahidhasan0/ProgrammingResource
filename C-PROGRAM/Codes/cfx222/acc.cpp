#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n,c,t,m,k;
    //freopen("test.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d",&n,&k);
        c=0;
        while(n--){
            scanf("%d %d",&t,&b);
            m=min(t,k);
            t-=m;
            k-=m;
            c+=t*b;
        }
        printf("%d\n",c);
    }
    return 0;
}
