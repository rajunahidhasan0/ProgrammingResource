#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;
char ar[1002][1002];
int i,j,a,b,ts,f=1,cn=0,n,sx,sy,tx,ty,tc,sc,r,m;
int main()
{
    //freopen("test.txt","r",stdin);
    scanf("%d %d ",&n,&m);
    for(i=0;i<n;i++){
        scanf("%s",ar[i]);
        for(j=0;j<m;j++){
            if(ar[i][j]=='S'){
                sx=i;
                sy=j;
            }
            else if(ar[i][j]=='T'){
                tx=i;
                ty=j;

            }
        }
    }
    for(i=tx+1;i<n;i++){
        if(ar[i][ty]!='.')break;
        else ar[i][ty]='T';
    }
    for(i=tx-1;i>=0;i--){
        if(ar[i][ty]!='.')break;
        else ar[i][ty]='T';
    }

    for(i=sx+1;i<n;i++){
        if(ar[i][sy]!='.')break;
        else ar[i][sy]='S';
    }
    for(i=sx-1;i>=0;i--){
        if(ar[i][sy]!='.')break;
        else ar[i][sy]='S';
    }
   // P(tx)
    for(i=ty+1;i<m;i++){
        if(ar[tx][i]!='.')break;
        else ar[tx][i]='T';
    }

    for(i=ty-1;i>=0;i--){
        if(ar[tx][i]!='.')break;
        else ar[tx][i]='T';
       // P(i)
    }
    for(i=sy+1;i<m;i++){
        if(ar[sx][i]!='.')break;
        else ar[sx][i]='S';
    }
    for(i=sy-1;i>=0;i--){
        if(ar[sx][i]!='.')break;
        else ar[sx][i]='S';
    }
    r=0;
    for(i=0;i<n;i++){
        tc=sc=0;
        for(j=0;j<m;j++){
            if(ar[i][j]=='S')sc++;
            else if(ar[i][j]=='T')tc++;
            else if(ar[i][j]=='*')sc=tc=0;
            if(tc&&sc){
                r=1;
            }
        }
    }
    for(i=0;i<m;i++){
        tc=sc=0;
        for(j=0;j<n;j++){
            if(ar[j][i]=='S')sc++;
            else if(ar[j][i]=='T')tc++;
            else if(ar[j][i]=='*')sc=tc=0;
            if(tc&&sc){
              //  P(i<<j)
                r=1;
            }
        }
    }
    if(r)puts("YES");
    else puts("NO");

    //printf("%d\n");
    return 0;
}
