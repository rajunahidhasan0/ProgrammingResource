#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

int p;
int prz(ll s)
{
    int x=(s/50)%475;
    for(int i=0;i<25;i++){
        x=(x*96+42)%475;
        if(x==p)return 1;
    }
    return 0;
}
int main()
{
    ll x,y,i,j,a,b,ts,f=1,cn=0,n;
    //freopen("test.txt","r",stdin);
    scanf("%d %lld %lld",&p,&x,&y);
    p-=26;
    for(i=x;i>=y;i-=50){
        if(prz(i)){
            f=0;
            break;
        }
    }
    if(f){
        for(i=x;;i+=50){
        if(prz(i)){
         //   P(i)
            break;
        }
        }
    }
    if(f){
        f=ceil((i-x)/100.0)+.00001;
        printf("%lld\n",f);

    }
    else printf("0\n");
    return 0;
}
