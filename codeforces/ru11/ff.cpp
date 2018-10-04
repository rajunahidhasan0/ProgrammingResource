#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;



int main()
{
    ll i,j,a,b,ts,cn=0,n,s,p;
    //freopen("test.txt","r",stdin);
    //scanf("%d",&ts);
    while(scanf("%lld %lld",&n,&p)==2){
        s=0;
        for(i=1;i<=n;i++){
            s+=i*pow(p,i);
        }

        printf("%lld\n",s);
    }
    return 0;
}
