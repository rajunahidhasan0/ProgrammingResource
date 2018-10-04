#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
//double a1,a2,b1,b2,c1,c2,d1,d2;
double ax,ay,az,bx,by,bz,px,py,pz;
double ds(double t)
{
    double x,y,z,dx,dy,dz;
    x=ax+(bx-ax)*t;
    y=ay+(by-ay)*t;
    z=az+(bz-az)*t;

    dx=px-x;
    dy=py-y;
    dz=pz-z;
    return sqrt(dx*dx+dy*dy+dz*dz);
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
    freopen("test.in","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf(" %lf%lf%lf%lf%lf%lf%lf%lf%lf ",&ax,&ay,&az,&bx,&by,&bz,&px,&py,&pz);

        printf("Case %d: %lf\n",++cn,tsl());
    }
    return 0;
}

