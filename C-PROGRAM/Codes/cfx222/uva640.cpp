#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int ar[10000];
int main()
{
    ar[0]=0;
    ar[1]=ar[5]=ar[10]=ar[25]=ar[50]=1;
    int i,j,a,b,ts,f=1,cn=0,n;
    for(i=2;i<9555;i++){
        ar[i]+=ar[i-1];
    }
    //freopen("test.txt","r",stdin);
    while(scanf("%d",&n)==1){
        printf("%d\n",ar[n]);
    }

    printf("%d\n");
    return 0;
}
