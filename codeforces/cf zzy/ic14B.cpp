#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;
#define eps .000001
int main()
{
    int ts,cn=0,n;
    ll a,b,i,f,k,j,oor,nd;
    //freopen("test.txt","r",stdin);
    scanf("%d",&ts);

    while(ts--){
        scanf("%lld %lld",&a,&b);
        nd=oor=f=0;
        for(i=62;i>=0;i--){
           // printf("dd %lld %lld %lld\n",b,i,(1LL<<i));
            if(((b&(1LL<<i)))){
                f=1;
                if((a&(1LL<<i))){
                    oor=oor|(1LL<<i);
                    nd=nd|(1LL<<i);
                }
                else{
                    oor=oor|((1LL<<(i+1))-1);
                    nd=nd&(~((1LL<<(i+1))-1));
                    break;
                }
            }
        }
        printf("Case %d: %lld %lld\n",++cn,oor,nd);
      //  P(((ll)(pow(2,62)+eps)))
    }
    return 0;
}
