#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
char s[100][100];
int h,w;
int dp(int x,int y)
{
    int i,j,c=0;
    for(i=x;i<w;i++){
        if(s[y][x]=='#')break;
        c++;
    }
    for(i=x-1;i>=0;i--){
        if(s[y][x]=='#')break;
        c++;
    }
    return c;
}
int main()
{
    int i,j,a,b,ts,cn=0,n,x,y;
    freopen("test.in","r",stdin);
    scanf("%d",&ts);
    while(ts--){
        scanf("%d%d",&w,&h);
        for(i=0;i<h;i++){
            scanf("%s",s[i]);
            for(j=0;j<w;j++){
                if(s[i][j]=='@'){
                    x=j;
                    y=i;
                    s[i][j]='.';
                }
            }
        }
        int c=0;
    for(i=y;i<h;i++){
        c+=dp(x,i);
    }
    for(i=y-1;i>=0;i--){
       c+=dp(x,i);
    }

        printf("Case %d: %d\n",++cn,c);
    }
    return 0;
}
