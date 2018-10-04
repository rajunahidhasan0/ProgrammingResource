#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,m,d,ar[]={0,31,28,31,30,31,30,31,31,30,31,30,31,30,31,30,31,30,31,30,};
    //freopen("test.txt","r",stdin);
    scanf("%d %d",&m,&d);
    a=ar[m]-(8-d);
    b=ceil(a/7.0);
    printf("%d\n",b+1);
    return 0;
}
