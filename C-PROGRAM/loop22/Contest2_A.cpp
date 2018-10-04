#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
struct st{
    int pi;
    int mi;
    double av;
    st(){}
    st(int a, int b){

            pi = a;
            mi=b;
    }
}ob[30000];

bool compare(st E1, st E2){
    return E1.mi < E2.mi;
}
int main()
{
    int test, tc=0, a, b ;
    cin>>test;
    while(test--){
        double p, m;
        int n, d;
        scanf("%d %d", &n, &d);
        for(int i=0 ; i<n; i++){
            scanf("%lf %lf", &p, &m);
            ob[i].pi=p;
            ob[i].mi=m;
            double x;
            x = p/m;
            ob[i].av=x;
        }
        double ans=0.0, k=0.0;
        sort(ob, ob+n, compare);

        for(int i=0 ; i<n-d; i++){
            //cout<<ob[i].pi<<" "<<ob[i].mi<<" "<<endl;
            ans+=ob[i].pi;
            k+=ob[i].mi;
        }
        //cout<<k<<endl;
        ans = (ans/k)*100.00;
        printf("Case %d: %0.9lf\n", ++tc, ans);
    }
    return 0;
}
