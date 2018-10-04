#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define sz 10000000
using namespace std;
 //char ar[sz];
int main()
{
    int i,j,a,b,ts,cn=0,n,f=1,v,c=0,s;
    double d;

    //freopen("test.in","r",stdin);
    //scanf("%d %d",&a,&b);
    n=1E3;
for(n=2;n<1E4;n++){
    d=1;
    c=0;
    for(i=1;i<=n;i++){
        d*=i;
        while(d>10){
            c++;
            d/=10;

        }
    }
    d=0;
    for(i=1;i<=n;i++){
        d+=(log10(i));
    }
    s=floor(d)+1;
    c++;
    if(c!=s)
    printf("%d\n%dA\n",c,s);
}

    return 0;
}
