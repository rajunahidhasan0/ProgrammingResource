#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,cn=0,n;
    //freopen("test.txt","r",stdin);
    scanf("%d %d %d",&a,&b,&n);
    for(i=0;n>=0;i++){
        if(i%2==0)n=n-__gcd(a,n);
        else n=n-__gcd(b,n);
    }

    printf("%d\n",i%2);
    return 0;
}
