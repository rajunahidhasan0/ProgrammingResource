#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
#define inf 200000000
using namespace std;
int ar[200009],in;
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,x;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x)ar[i]=inf;
        else ar[i]=0;
    }
    in=inf;
    for(i=0;i<n;i++){
        if(!ar[i])in=0;
        if(ar[i]>in)ar[i]=in;
        if(in<inf)in++;
    }
    in=inf;
    for(i=n-1;i>=0;i--){
        if(!ar[i])in=0;
        if(ar[i]>in)ar[i]=in;
        if(in<inf)in++;
    }

    for(i=0;i<n-1;i++)printf("%d ",ar[i]);
    printf("%d\n",ar[i]);
    return 0;
}
