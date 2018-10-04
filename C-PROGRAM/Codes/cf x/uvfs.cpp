#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,x1=0,x2=0,d;
    char s[100];
    //freopen("test.txt","r",stdin);
    scanf("%d ",&ts);
    while(ts--){
    x1=x2=0;
    scanf("%s",s);
    sscanf(s,"%d",&d);
    while(d){
        x1+=(d&1);
        d>>=1;
    }
    sscanf(s,"%x",&d);
    while(d){
        x2+=(d&1);
        d>>=1;
    }
    printf("%d %d\n",x1,x2);
    }
    return 0;
}
