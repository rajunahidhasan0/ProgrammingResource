#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
double a1,a2,b1,b2,c1,c2,d1,d2;
double ds(double t)
{
    double xa,ya,xc,yc,dx,dy;
    xa=a1+(b1-a1)*t;
    ya=a2+(b2-a2)*t;
    xc=c1+(d1-c1)*t;
    yc=c2+(d2-c2)*t;
    dx=xc-xa;
    dy=yc-ya;
    return sqrt(dx*dx+dy*dy);
}
double tsl()
{
    double a=0,b=1,dl=.00000001,m;
    int i=0;
    while(i++<1000){
        m=(a+b)/2.0;
        if(ds(m)>ds(m+dl)){
            a=m;
        }
        else b=m;
    }
    return ds(m);
}
int main()
{
    int i,j,a,b,ts,cn=0,n;
    //freopen("test.in","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf(" %lf%lf%lf%lf%lf%lf%lf%lf ",&a1,&a2,&b1,&b2,&c1,&c2,&d1,&d2);

        printf("Case %d: %lf\n",++cn,tsl());
    }
    return 0;
}
