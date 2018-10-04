#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))

LL func(LL N)
{
    LL c=0;
    while(N>0){
        N/=2;
        c++;
    }
    return c;
}
LL func2(LL N)
{
    LL w=0, t=1;
    while(N--){
        w+=t;
        t*=2;
    }
    return w;
}
int main()
{
    LL n, k, ans, m, u, v;
    cin>>n>>k;

    m = func(n);
    //u = min(m, k);

    v = func2(m);
    ///cout<<u<<" "<<v<<endl;
    if(n==v)ans=v;
    else if(k>=2)ans=v;

    cout<<ans<<endl;
    return 0;
}


