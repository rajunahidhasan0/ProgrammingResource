#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,ar[11];
    freopen("test.in","r",stdin);
    for(i=0;i<5;i++){
        scanf("%d",&ar[i]);
    }
    sort(ar,ar+5);
    reverse(ar,ar+5);
    int d=0;
    ar[5]=-1;
    for(i=1;i<5;i++){
        if(ar[i]==ar[i-1]){
            if(ar[i]==ar[i+1])ar[i+1]=0;
            ar[i]=ar[i-1]=0;
            break;
        }
    }
    for(i=0;i<5;i++){
        d+=ar[i];
       // P(d)
    }
    printf("%d\n",d);
    return 0;
}
