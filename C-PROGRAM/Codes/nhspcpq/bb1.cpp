#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
char s1[55][55];
int r,s,xx,yy,i;
int dx[]={1,1,1,-1,-1,-1,0,0};
int dy[]={1,0,-1,1,0,-1,1,-1};
int chk(int x,int y)
{
    int v=0;
    for(i=0;i<8;i++){
        xx=x+dx[i];
        yy=y+dy[i];
        if(xx>=0&&yy>=0&&xx<r&&yy<s){
            if(s1[xx][yy]=='o')v++;
        }

    }
    return v;
}
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,mi=0,mj=0,mx=0,t;

    //freopen("test.txt","r",stdin);
    scanf("%d %d ",&r,&s);
    for(i=0;i<r;i++){
        scanf("%s",s1[i]);
    }
    for(i=0;i<r;i++){
        for(j=0;j<s;j++){
            if(s1[i][j]=='.'){
                if(chk(i,j)>mx){
                    mx=chk(i,j);
                    mi=i;
                    mj=j;
                }
            }
        }
    }
    if(s1[mi][mj]=='.')s1[mi][mj]='o';
    t=0;
    for(i=0;i<r;i++){
        for(j=0;j<s;j++){
            if(s1[i][j]=='o'){
                t+=chk(i,j);
               // P(i<<j)
                s1[i][j]='.';
            }
        }
    }

    printf("%d\n",t);
    return 0;
}
