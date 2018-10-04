#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
int main()
{
    double n, m, ans=0, x, d;
    double a=0, b=0;
    cin>>n>>m;
    int j=n/2;
    for(int i=1 ; i<=m; i++){
        scanf("%lf %lf", &x, &d);
        ans+= n*x;
        a = (((n-1)*(n)/2.0))*d;
        b = ( j*(j-1)/2.0  + ((n-j)*(n-j+1)/2.0) )*d;

        ans += max(a,b);
    }
    ans = ans/n;
    printf("%.9lf\n", ans);
    return 0;
}


