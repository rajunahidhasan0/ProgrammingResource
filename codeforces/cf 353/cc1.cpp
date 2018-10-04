#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,k,mx=0,p,in,m1;
    char s[100009];
    int ar[100009];
    //freopen("test.in","r",stdin);
    scanf(" %d %d ",&n,&k);
    scanf(" %s ",s);
    in=0;
    for(i=0;i<n;i++){
        if(s[i]=='b'){
            in++;
            ar[in]=i;
        }
        p=0;
        if(in>k){
            p=ar[in-k]+1;
        }
        m1=i-p+1;
        if(mx<m1)mx=m1;
    }

    in=0;
    for(i=0;i<n;i++){
        if(s[i]=='a'){
            in++;
            ar[in]=i;
        }
        p=0;
        if(in>k){
            p=ar[in-k]+1;
        }
        m1=i-p+1;
        if(mx<m1)mx=m1;
    }

    printf("%d\n",mx);
    return 0;
}
