#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int p9(int p)
{
    if(p==0)return 1;
    ll x=p9(p/2);
    if(p%2)return (x*x*9)%10;
    else return (x*x)%10;
}
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n;
    //freopen("test.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
    scanf("%d",&n);
    if(n%2)puts("9");
    else puts("1");
   // printf("%d\n",p9(n));
    }
    return 0;
}
