#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))

LL comb(LL d, LL p, LL n)
{
    LL w, te;
    te = n/pow(10,p);
    w*=
    for(int i=0; ; i++){
        if(n%10>0){

        }
        n/=10;
        d++;
        if(n==0){
            break;
        }
    }
    return w;
}

LL func(LL n)
{
    LL m, d=0;
    for(int i=0; ; i++){
        if(n%10>0){

        }
        n/=10;
        d++;
        if(n==0){
            break;
        }
    }
    cout<<comb(d, 1, n)<<" "<<comb(d, 2, n)<<" "<<comb(d, 3, n)<<endl;
    m = comb(d, 1, n) + comb(d, 2, n) + comb(d, 3, n);
    return m;
}
LL isA(LL u)
{
    LL c=0;
    for(int i=0; ; i++){
        if(u%10 > 0)c++;
        u/=10;
        if(u==0){
            break;
        }
    }
    if(c<=3)return 1;
    else return 0;
}

int main()
{
    LL test;
    cin>>test;
    while(test--){
        LL l, r, ans;
        cin>>l>>r;
        LL p, q;
        p = func(r);
        q = func(l);
        cout<<p<<" <:::> "<<q<<endl;
        ans = p - q;
        ans+=isA(l);
        cout<<ans<<endl;
    }
    return 0;
}


