#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n,an,mx,x,y;
    //freopen("test.txt","r",stdin);
    //scanf("%d",&ts);
    while(scanf("%d%d",&a,&b)==2){
        mx=0;
        x=a;
        y=b;
        if(a>b)swap(a,b);
        for(i=a;i<=b;i++){
            n=i;
            an=1;
            while(n!=1){
                an++;
                if(n%2){
                    n=3*n+1;
                }
                else {
                    n/=2;
                }
            }
            mx=max(mx,an);
        }
        printf("%d %d %d\n",x,y,mx);
    }
    return 0;
}

