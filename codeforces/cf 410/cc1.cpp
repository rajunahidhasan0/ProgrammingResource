#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;
ll ar[100009],ga,gb,gc;
int main()
{
    int n;
    ll i,j,a,b,ts,f=1,cn=0,lc=0,st=0;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    scanf("%lld",&ar[i]);
    gc=ar[0];
    for(i=1;i<n;i++){
        scanf("%lld",&ar[i]);
        //gc=gcd(gc,ar[i]);
    }
    for(i=1;i<(n-1);i++){
        lc++;
        ga=__gcd(gc,ar[i]);
        while(abs(ga)==1){
            st++;
            a=ar[i]-ar[i+1];
            b=ar[i]+ar[i+1];
            lc++;
            if(lc>1E8)break;
            ga=__gcd(gc,__gcd(a,b));
            if(abs(ga)==1){
                a=ar[i-1]-ar[i];
                b=ar[i]+ar[i-1];
                ga=__gcd(gb,__gcd(a,b));
            }
            else {
                i++;
                ar[i+1]=ar[i]+ar[i+1];
            }

        }
        gb=gc;
        gc=ga;

    }
    if(lc>1E8)puts("NO");
    else printf("YES\n%lld\n",st);
    return 0;
}
