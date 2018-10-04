#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j;
    double a,b,s;
    freopen("test.txt","r",stdin);
    a=b=1;
    s=0;
    for(i=1;i<=39;i++){
        s=s+a/b;
        a=a+2;
        b=b*2;
    }
    printf("%lf",s);
    return 0;
}
