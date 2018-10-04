#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

int main()
{
    int i,j,a,b,ts,f=1,p,r,cn=0,n;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    r=0;
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a!=b)r=1;
        else if(r==0&&i){
                if(a>p)r=-1;

        }
        p=a;
    }
    if(r==-1)puts("unrated");
    if(r==0)puts("maybe");
    if(r==1)puts("rated");

 //   printf("%d\n");
    return 0;
}
