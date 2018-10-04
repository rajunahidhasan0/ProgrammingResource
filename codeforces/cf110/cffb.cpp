#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int xr[60009],vr[60009],n;
double l,h,e=.000001;
double tc(double px){
    double c=0;
    int i;
    for(i=0;i<n;i++){
        c=max(c,abs((xr[i]-px)/vr[i]));
    }
    return c;
}
double tns()
{
    int i;
    double m,x;
    for(i=0;i<300;i++){
        m=(l+h)/2.0;
        x=tc(m);
        if(x>tc(m+e)){
                l=m;
        }
         if(x>tc(m-e)){
             h=m;
        }
    }
    return x;
}
int main()
{
    int i,j,a,b,ts,f=1,cn=0;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&xr[i]);

    }
    l=h=xr[0];
    for(i=0;i<n;i++){
        scanf("%d",&vr[i]);
        if(l>xr[i])l=xr[i];
        if(h<xr[i])h=xr[i];
    }

    printf("%.6lf\n",tns());
    return 0;
}
