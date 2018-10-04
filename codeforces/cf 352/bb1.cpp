#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int ar[333];
char s[100009];
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,ln,c;
    //freopen("test.in","r",stdin);
    scanf("%d %s",&ln,s);
    if(ln>26)puts("-1");
    else {
        for(i=0;i<ln;i++){
            ar[s[i]]++;
        }
        c=0;
        for(i='a';i<='z';i++){
            if(ar[i]){
                c+=ar[i]-1;
            }
        }
        printf("%d\n",c);
    }


    return 0;
}
