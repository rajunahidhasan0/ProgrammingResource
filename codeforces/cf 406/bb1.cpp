#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,m,p,x,r,mx;
    map <int,int> mp;
    //freopen("test.txt","r",stdin);
    scanf("%d%d",&n,&m);
    mx=0;
    for(i=1;i<=m;i++){
        scanf("%d",&x);
        r=1;
        mp.clear();
        for(j=0;j<x;j++){
            scanf("%d",&p);
            a=abs(p);
            if(!mp[a]){
                mp[a]=p/a;
            }
            else if(mp[a]!=p/a){
                r=0;
            }
        }
        mx+=r;
    }
    //P(mx)
    if(mx)puts("YES");
    else puts("NO");
    return 0;
}
