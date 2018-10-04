#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int ar[1005][1005];
int main()
{
    ll t=0,c;
    int i,j,a,b,ts,f=1,cn=0,n,x,y;
    //freopen("test.in","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){

        scanf("%d%d",&a,&b);
        ar[a][b]=1;
    }
    //memset(ar,1,sizeof(ar));
    for(i=1000;i>0;i--){
        c=0;
        for(x=i,y=1;x<=1000&&y<=1000;x++,y++){
            if(ar[x][y])c++;
        }
        t+=(c*(c-1))/2;
    }
    for(i=2;i<=1000;i++){
        c=0;
        for(x=1,y=i;x<=1000&&y<=1000;x++,y++){
            if(ar[x][y])c++;
        }
        t+=(c*(c-1))/2;
    }
    for(i=1000;i>0;i--){
        c=0;
        for(x=i,y=1;x>0&&y<=1000;x--,y++){
            if(ar[x][y])c++;
        }
        t+=(c*(c-1))/2;

    }
    for(i=2;i<=1000;i++){
        c=0;
        for(x=1000,y=i;x>0&&y<=1000;x--,y++){
            if(ar[x][y])c++;
        }
        t+=(c*(c-1))/2;

    }
    //cout<<t<<endl;
    printf("%lld\n",t);
    return 0;
}
