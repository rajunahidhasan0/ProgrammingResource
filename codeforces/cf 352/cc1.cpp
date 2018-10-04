#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
double ds(double x1, double y1, double x2, double y2)
{
    double r1,r2;
    r1=x2-x1;
    r2=y2-y1;
    return sqrt(r1*r1+r2*r2);
}
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,x1,x2,ax,ay,bx,by,tx,ty,x,y;
    double ar[100009],br[100009],tr[100009],s=0,dm,d1,dm2;
    //freopen("test.in","r",stdin);
    scanf("%d%d%d%d%d%d",&ax,&ay,&bx,&by,&tx,&ty);
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&x,&y);
        ar[i]=ds(x,y,ax,ay);
        br[i]=ds(x,y,bx,by);
        tr[i]=ds(x,y,tx,ty);
        s+=2*tr[i];
    }

        dm=1E-9;
    for(i=1;i<=n;i++){
        d1=tr[i]-ar[i];
        if(d1>dm){
            dm=d1;
            x1=i;
        }
    }
     s-=dm;

    dm2=1E-9;
    for(i=1;i<=n;i++){
        d1=tr[i]-br[i];
        if(d1>dm2){
            dm2=d1;
            x2=i;
        }

    }
    if(x1==x2){
        if(dm>dm2){
            s-=dm;
            dm2=1E-9;
    for(i=1;i<=n;i++){
        d1=tr[i]-br[i];
        if(d1>dm2&&i!=x1){
            dm2=d1;
            x2=i;
        }

    }
    s-=dm2;
        }
        else {
            s-=dm2;
             dm2=1E-9;
    for(i=1;i<=n;i++){
        d1=tr[i]-ar[i];
        if(d1>dm2&&i!=x2){
            dm2=d1;
            x2=i;
        }

    }
    s-=dm2;

        }
    }
    else
    {
        s-=dm2;
        s-=dm;
    }

    printf("%lf\n",s);
    return 0;
}
