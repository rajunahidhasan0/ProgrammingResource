#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
double m[33333333];
int main()
{
  //  freopen("test.txt","r",stdin);
    int n,a[3],x[2222],y[2222],k,j,i,l=0,ii=0;
    vector<pair<int,int> >vp;
    pair<int,int>pr;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
       // vp.push_back(pr);
    }
//    for(i=0;i<n-1;i++)
//    for(j=i+1;j<n;j++)
//        m[ii++]=((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
//    sort(m,m+ii);
    for(i=0;i<n-2;i++)
        for(j=i+1;j<n-1;j++)
            for(k=j+1;k<n;k++){
                a[0]=((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
                a[1]=((x[k]-x[j])*(x[k]-x[j])+(y[k]-y[j])*(y[k]-y[j]));
                a[2]=((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k]));
                sort(a,a+3);
                if(a[0]+a[1]==a[2]) l++;
            }

    printf("%d\n",l);
    return 0;
}
