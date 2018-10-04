#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,k;
    char s[111];
    //freopen("test.in","r",stdin);
    scanf(" %d %d ",&n,&k);
    scanf(" %s ",s);
    for(i=0;i<n;i++){
        if(s[i]=='T'||s[i]=='G')break;
    }
    a=0;
    for(i+=k;i<n;i+=k){
    if(s[i]=='#')break;
        if(s[i]=='T'||s[i]=='G'){
            a=1;
            break;
        }
    }


    if(a)puts("YES");
    else puts("NO");
    return 0;
}
