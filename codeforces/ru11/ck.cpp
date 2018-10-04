#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    ll i,j,a,b,ts,f=1,cn=0,n,x,op,tp;
    //freopen("test.txt","r",stdin);
    scanf("%lld",&n);
    int fx=0;
    tp=op=1;
    for(i=1;i<=n;i++){
        scanf("%lld",&x);
        if(x==1){
          fx=1;
            tp=tp*op;
            op=1;
        }
        else if(fx)op++;
    }
    if(!fx)tp=0;
    printf("%lld\n",tp);
    return 0;
}
