#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    scanf("%d",&t);
    for(i=1 ; i<=t ; i++){
        double d,ans,v1,v2,v3,a1,a2,te,to;
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);

        d=  ( ((v1*v1)/a1)+((v2*v2)/a2) )/2;

        te=(v1*v3)/a1;
        to=(v2*v3)/a2;
        if(te>to)ans=te;
        else ans=to;

        printf("Case %d: %0.11lf %0.11lf\n",i,d,ans);
    }
    return 0;
}

