#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
char sr[1000000000];
void siv(int n)
{
    int i,j,rt,c;
    rt=sqrt(n)+2;
    for(i=2;i<rt;i++){
        for(j=i*i;j<=n;j+=i)sr[j]=1;
    }
    c=0;
    for(i=2;i<=n;i++){
        if(!sr[i])c++;
    }
    printf("%d\n",c);
}
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n;
    //freopen("test.in","r",stdin);
    //scanf("%d",&n);
    n=1E8;
    siv(n);
    return 0;
}
