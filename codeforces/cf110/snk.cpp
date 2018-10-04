#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int sd[111];
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,pr[1000009],sl,d;

    freopen("test.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
            scanf("%d %d %d",&n,&sl,&d);
        memset(sd,0,sizeof(sd));
        for(i=0;i<sl;i++){
            scanf("%d %d",&a,&b);
            sd[a]=b;
        }
        for(i=0;i<=n;i++)pr[i]=1;
        for(i=0;i<d;i++){
            scanf("%d",&a);
            pr[i%n]+=a;
            if(sd[pr[i%n]])pr[i%n]=sd[pr[i%n]];
            if(pr[i%n]>=100){
                pr[i%n]=100;
                break;
            }
        }

        for(i=0;i<n;i++)printf("Position of player %d is %d.\n",i+1,pr[i]);
    }
    return 0;
}
