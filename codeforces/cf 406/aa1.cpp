#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,c,d,ts,f=1,cn=0,n;
    //freopen("test.txt","r",stdin);
    scanf("%d%d",&a,&b);
    scanf("%d%d",&c,&d);
    n=6*pow(10,7);
    for(i=0;i<n;i++){
        if(d==b)break;
        else if(b<d){
            b+=a;
        }
        else if(b>d){
            d+=c;
        }
    }
    if(d==b)printf("%d\n",d);
    else printf("-1\n");
    return 0;
}
