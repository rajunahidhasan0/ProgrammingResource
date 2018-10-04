#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
int pr[100009];
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,tb,tm,x;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    tm=tb=0;
    n*=2;
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(pr[x]==0){
            pr[x]=1;
            tb++;
            if(tb>tm)tm=tb;
        }
        else {
            tb--;
        }

    }

    printf("%d\n",tm);
    return 0;
}
