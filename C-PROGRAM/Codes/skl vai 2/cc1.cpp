#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n,ar[11];
    //freopen("test.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d %d",&ar[0],&ar[1],&ar[2]);
        sort(ar,ar+3);
        printf("Case %d: %d\n",++cn,ar[1]);
    }
    return 0;
}
