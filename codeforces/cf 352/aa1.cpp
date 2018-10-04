#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n;
    char s[10000];
    //freopen("test.in","r",stdin);
    scanf("%d",&n);
    s[0]=0;
    for(i=1,j=0;i<=1009;i++){
        while(s[j]!=0){
            j++;
        }
        sprintf(s+j,"%d",i);
    }
//puts(s);
    printf("%c\n",s[n-1]);
    return 0;
}
