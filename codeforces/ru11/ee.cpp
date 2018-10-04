#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    ll i,j,a,b,ts,cn=0,n;
    //freopen("test.txt","r",stdin);
    //scanf("%lld",&ts);
    while(scanf("%lld %lld",&a,&b)==2){

        printf("%lld\n",abs(a-b));
    }
    return 0;
}
