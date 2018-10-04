#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,fl,a,b,ts,cn=0;
    double u,h,d,f,eps =0.00000001,c;
    //freopen("test.txt","r",stdin);
    while(1){
        scanf("%lf%lf%lf%lf",&u,&h,&d,&f);

        if(!u)break;
        f*=.01;
        f=h*f;
        //P(f)
        c=0;
        for(i=1;;i++){
            c+=h;
            //P(c)
            if(c>u){
                fl=1;
                break;
            }
            else if(c<0){
                fl=-1;
                break;
            }

            h-=f;
            if(h<0)h=0;
            c-=d;
            //P(c)
            if(c<0){
                fl=-1;
                break;
            }

        }
        if(fl==1)printf("success on day %d\n",i);
        else printf("failure on day %d\n",i);
    }
    return 0;
}
