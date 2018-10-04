#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,s,ar[505][505],k,sum=0;
    //freopen("test.in","r",stdin);
    scanf("%d %d",&n,&k);
    s=n*n;
    for(i=1;i<=n;i++){
        for(j=n;j>=k;j--){
            ar[i][j]=s;
            s--;
        }

        sum+=s+1;

    }
    a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<k;j++){
            ar[i][j]=a;
            a++;
        }
    }
    printf("%d\n",sum);
    for(i=1;i<=n;i++){
        for(j=1;j<n;j++){
            printf("%d ",ar[i][j]);
        }
        printf("%d\n",ar[i][j]);
    }

    return 0;
}
