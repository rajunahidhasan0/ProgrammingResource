#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int dn[100009];
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,x;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    dn[n+1]=1;
    int fn=n;
    for(i=1;i<=n;i++){
        scanf("%d",&x);
            dn[x]=1;
            if(fn==x){
                printf("%d",fn);
                fn--;
                while (dn[fn]){
                    printf(" %d",fn);
                    fn--;
                }
            }
        puts("");
    }

    return 0;
}
