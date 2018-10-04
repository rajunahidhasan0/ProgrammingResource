#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
char s[1002][3000];
int main()
{
    int t,i,j,a,b,ts,cn=0,n,sm;
    //freopen("test.txt","r",stdin);
    s[0][0]=1;
    s[0][1]=-1;
    s[1][0]=2;
    s[1][1]=-1;
    for(i=2;i<1001;i++){
        sm=0;
        for(j=0;;j++){
            t=0;
            if(s[i-1][j]!=-1){
                sm+=s[i-1][j];

                t=1;
            }
            else s[i-1][j+1]=-1;
            if(s[i-2][j]!=-1){

                sm+=s[i-2][j];
                t=1;
            }
            else s[i-2][j+1]=-1;
            s[i][j]=sm%10;
            sm/=10;
            if(!sm&&s[i-2][j+1]==-1&&s[i-1][j+1]==-1){
            s[i][j+1]=-1;
                break;
            }
        }

    }
    while(scanf("%d",&n)==1){
        i=0;
        while(s[n][i]!=-1)i++;
        i--;
        while(i>=0)printf("%d",s[n][i--]);
        printf("\n");
    }
    return 0;
}
