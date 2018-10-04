#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
ll ar,sr;
int main()
{
    ll i,j,a,b,ts,f=1,cn=0,n,st,ft,tt,w,mw=pow(10,14),x;
    //freopen("test.txt","r",stdin);
    scanf("%lld %lld %lld",&st,&ft,&tt);
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&ar);
        sr=max((i)*tt+st,ar);
        if(((i)*tt+st<ar)&&((i+1)*tt+st<=ft)){

            x=((i)*tt+st)+1;
            break;
        }
        w=sr-ar;
        //P(w<<" "<<ar)
        if(w<mw&&sr+tt<=ft&&ar){
            x=ar;
            mw=w;
        }
    }
    if((i+1)*tt+st<=ft){

            x=((i)*tt+st)+1;

    }
    printf("%lld\n",x-1);
    return 0;
}
