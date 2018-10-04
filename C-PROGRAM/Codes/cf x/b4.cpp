#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
ll ar[1000008];

int main()
{
    int i,j,a,b,ts,cn=0,n;
    //freopen("test.txt","r",stdin);
    ar[1]=0;
    ar[2]=2;
    ll s=6;
    for(i=3;i<1000002;i++){

        ar[i]=ar[i-1]+s;
        s+=4;

    }
    scanf("%d",&ts);
    while(ts--){
        scanf("%d",&n);

        printf("%lld\n",ar[n]);
    }
    return 0;
}
