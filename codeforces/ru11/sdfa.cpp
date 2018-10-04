#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
ll ar[10000];
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    ar[0]=1;
    ar[1]=2;
    for(i=2;i<=n;i++){

        ar[i]=ar[i-1]+ar[i-2];
        printf("%d %lld\n",i,ar[i]);
    }


    printf("%lld\n",ar[n]);
    return 0;
}
