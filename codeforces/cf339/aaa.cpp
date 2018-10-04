#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    //ll i,j,a,b,ts,cn=0,n,f=1,v;

    freopen("test.in","r",stdin);
    ll l, r, k;
    scanf("%lld %lld %lld", &l, &r, &k);
    ll cnt = 0, val = 1;
    while(val <= r){
        if(val >= l){
            cout << val << ' ';
            cnt++;
        }
        val *= k;
    }
    if(!cnt) cout << "-1";
	return 0;
}
