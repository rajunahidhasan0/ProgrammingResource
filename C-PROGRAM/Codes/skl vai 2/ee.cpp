#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n,f;
    //freopen("test.txt","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d %d",&a,&f);
        while(f--){
            for(i=1;i<=a;i++){
                for(j=1;j<=i;j++)printf("%d",i);
                puts("");
            }
            for(i=a-1;i>0;i--){
                for(j=1;j<=i;j++)printf("%d",i);
                puts("");
            }
            if(ts||f)puts("");

        }

    }
    return 0;
}
