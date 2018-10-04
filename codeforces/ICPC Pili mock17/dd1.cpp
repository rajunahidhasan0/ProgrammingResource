#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;
int ar[1002][1002];
int main()
{
    int i,j,a,b,ts,cn=0,n,d,p;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    j=i=1;
    d=1;
    for(p=n*n;p>1;p--){
        ar[i][j]=p;
        //printf("d%d %d %d\n",p,i,j);
        if(d==1){
            if(i==1&&j<n)j++;
            else if(i==n&&j>1)j--;
            else d=2,p++;
        }
        else if(d==2){
            if(j==n&&i<n)i++;
            else  if(j==1&&i>1)i--;
            else d=1,p++;
        }
        if(i==1&&j==1)break;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)printf("%d ",ar[i][j]);
        puts("");
    }
    return 0;
}
