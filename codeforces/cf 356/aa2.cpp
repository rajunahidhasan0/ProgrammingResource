#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int mp[1000];
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,ar[11],s=0,r;
    //freopen("test.in","r",stdin);
    for(i=0;i<5;i++){
        scanf("%d",&ar[i]);
        s+=ar[i];
        mp[ar[i]]++;
    }
    r=0;
    for(i=1;i<=100;i++){
        if(mp[i]>1){
        if(mp[i]>3)mp[i]=3;
            if(r<i*mp[i])r=i*mp[i];
        }
    }


    printf("%d\n",s-r);
    return 0;
}
