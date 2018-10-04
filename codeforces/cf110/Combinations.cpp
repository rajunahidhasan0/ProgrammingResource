#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define M 107
using namespace std;
int modularInverse(int a, int n) {
  pair < int, int > ret;

    ret = extendedEuclid(a, n);
  return ((ret.first % n) + n) % n;
}
int main()
{
    int r,i,j,a,b,ts,cn=0,n;
    freopen("test.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d",&n,&r);

        printf("Case %d: %d\n",++cn,ncr(n,r));
    }
    return 0;
}
