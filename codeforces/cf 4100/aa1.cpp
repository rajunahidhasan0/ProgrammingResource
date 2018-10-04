#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n;
    ll ar[100009],mn,m,s,k;
    //freopen("test.txt","r",stdin);
    scanf("%d %lld",&n,&k);
    mn=2E9;
    for(i=0;i<n;i++){
        scanf("%lld",&ar[i]);
        mn=min(mn,ar[i]);
    }
    s=0;
    f=1;
    for(i=0;i<n;i++){
        ar[i]-=mn;
        s+=ar[i]/k;
        if(ar[i]%k){
            f=0;
            break;
        }
    }
    if(f) printf("%lld\n",s);
    else puts("-1");
    return 0;
}
