#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define eps .00001
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,c,x,t;
    double ar[20][20];
    //freopen("test.in","r",stdin);
    scanf("%d%d",&n,&t);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            ar[i][j]=0;
        }
    }
    for(x=1;x<=t;x++){
        ar[1][1]+=1;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                if(ar[i][j]-1>eps){
                    ar[i+1][j]+=(ar[i][j]-1)/2.0;
                    ar[i+1][j+1]+=(ar[i][j]-1)/2.0;
                    ar[i][j]=1;
                }
            }
        }

    }
    c=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(ar[i][j]+eps>1)c++;
        }
    }

    printf("%d\n",c);
    return 0;
}
