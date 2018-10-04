#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

int main()
{
    int i,j,ts,f=1,cn=0,n;
    double h,ar,a,b,a1;
    //freopen("test.txt","r",stdin);
    scanf("%d %lf",&n,&h);
    ar=h/2.0;
    ar/=n;
    a1=ar;
    b=0;

    for(i=1;i<n;i++){
        a=sqrt(2*ar*h);
        ar+=a1;
        printf("%.9lf ",a);
        b=a;
    }


    return 0;
}
