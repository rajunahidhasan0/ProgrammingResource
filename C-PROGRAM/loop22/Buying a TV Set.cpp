#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
LL GCD (LL a, LL b) {
  if(a%b==0)return b;
  return GCD(b, a%b);
}
int main()
{
    LL a, b, x, y, ans, g, m, n;
    cin>>a>>b>>x>>y;

    g = GCD(x, y);
    while(1){
        if(g==1)break;
        x = x/g;
        y = y/g;
        g = GCD(x, y);
    }

    m = a/x;
    n = b/y;
    ans = min(m, n);

    cout<<ans<<endl;
    return 0;
}


