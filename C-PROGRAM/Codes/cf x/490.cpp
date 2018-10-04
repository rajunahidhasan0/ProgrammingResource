#include <bits/stdc++.h>
#define P(X) printf("db %d\n",X);
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n,mx,ln;
    char s1[111][111],s2[111][111];
    freopen("test.txt","r",stdin);
    FO
    scanf("%d",&ts);
    ts=0;
    mx=-1;
    while(gets(s1[ts])){
        if(s1[ts][0]=='\0')break;
        ln=strlen(s1[ts]);
        mx=max(ln,mx);
        ts++;
    }
   // ts++;
    for(i=0;i<ts;i++){
        for(j=0;j<mx;j++){
            if(s1[i][j]==0){
                s1[i][j]=' ';
                s1[i][j+1]=0;
            }

        }
        s1[i][mx]=0;
    }
    for(i=0;i<mx;i++){
        for(j=ts-1;j>=0;j--){
            putchar(s1[j][i]);

        }
        puts("");

    }
//    P(ts)
//    for(i=0;i<mx;i++){
//    reverse(s2[i],s2[i]+ts);
//    puts(s2[i]);
//    }

    return 0;
}
