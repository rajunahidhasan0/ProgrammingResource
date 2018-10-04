#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int ld(int n){
int a=0,m=10;
    while(n%10==0){
        n/=10;

    }

    return n%10;
}
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,ar[10009];
    freopen("test.in","r",stdin);

    ar[1]=1;
    ar[0]=1;
    for(i=2;i<10002;i++){
        ar[i]=ld(ar[i-1]*i);

    }
    while(scanf("%d",&n)==1){
        printf("%5d ->%d\n",n,ar[n]);
    }
    return 0;
}

