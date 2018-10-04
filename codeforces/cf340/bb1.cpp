#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,ar[109];
    ll p=1,c;
    //freopen("test2.in","r",stdin);
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d",&ar[i]);
    }
    c=1;
    for(i=1;i<=n;i++){
        if(f)c=1;
        if(ar[i]==1){
            f=0;
            p*=c;
            //cout<<p<<endl;
            c=0;
        }
        c++;
    }
    printf("%lld\n",p);
    //cout<<p<<endl;
    return 0;
}
