#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
#define eps .0000001
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,x,k,d;
    //freopen("test.txt","r",stdin);
    scanf("%d%d",&n,&k);
    d=0;
    for(i=0;i<n;i++){
        scanf("%d",&x);
        d+=(ceil(x/(double)k))+eps;

    }
    d=ceil(d/2.0)+eps;
    printf("%d\n",d);
    return 0;
}
