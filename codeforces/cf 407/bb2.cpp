#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,q,l,m,x,in;
    ll r;
    map <int ,int> mp;
    //freopen("test.txt","r",stdin);
    scanf("%d%d%d%d",&b,&q,&l,&m);
    for(i=0;i<m;i++){
        scanf("%d",&x);
        if(b==0||q==0){
            if(!x)mp[x]=1;
            if(x==b)mp[x]=1;

        }
        else if((abs(x)%abs(b)==0&&abs(x)%abs(q)==0)||x==b ||x==-b)mp[x]=1;
    }

    if(1) {
        in=0;
        r=b;
        for(i=0;;i++){
            if(abs(r)>l)break;
            b=r;
            if(!mp[b])in++;
            r*=q;

        if(i>100)break;
        }

    }
    if(in>35)puts("inf");
    else printf("%d\n",in);

    return 0;
}
