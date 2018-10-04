#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

int main()
{
    ll i,j,a,b,ts,cn=0,n,x,y,p,q,m;
    freopen("test.txt","r",stdin);
    scanf("%lld",&ts);
    while(ts--){
        scanf("%lld%lld%lld%lld",&x,&y,&p,&q);
        if(p==q&&x!=y){
            puts("-1");
            continue;
        }
         if(p==0&&x!=0){
            puts("-1");
            continue;
        }


        if(p==q&&x==y){
            puts("0");
            continue;
        }
        if(2+(q/2)){
            a=ceil(x/(double)p);
            b=ceil(y/(double)q);
            m=max(a,b);
            a=p*m;
            b=q*m;
            i=0;
            while(a-x>b-y){
              //P(a<<" "<<b);
                i++;
                a+=p;
                b+=q;
            }
            printf("%lld %lld L1\n",b-y,i);
            //fr
        }
            if(1) {
            a=b=0;
            x=y-x;
            p=q-p;
            a=ceil(x/(double)p);
            b=ceil(y/(double)q);
            m=max(a,b);
            a=p*m;
            b=q*m;
            i=0;
            while(a-x>b-y){
              //P(a<<" "<<b);
                i++;
                a+=p;
                b+=q;
            }
            printf("%lld %lld L2\n",b-y,i);
        }

    }
    return 0;
}
