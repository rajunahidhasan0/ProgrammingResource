#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;
int ln;
char ss[55][110],s[100];
int cmp(int x,int p)
{
    int i;
    for(i=0;i<ln;i++){
        if(s[i]!=ss[x][p+i])return 0;
    }
    return 1;
}
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,ar[100],mn,t,sum,k;
    //freopen("test.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf(" %s",ss[i]);
    }
    ln=strlen(ss[0]);
    strcpy(s,ss[0]);
    for(i=0;i<n;i++){
        for(j=0;j<ln;j++){
            ss[i][j+ln]=ss[i][j];
        }
    }
    f=1;
    mn=20000000;
    for(k=0;k<n;k++){
        strcpy(s,ss[k]);
        s[ln]='\0';
        sum=0;
        for(i=0;i<n;i++){
            for(j=0;j<ln;j++){
                if(cmp(i,j)){
                    ar[i]=j;
                    break;
                }
                sum++;

            }

            if(j==ln){
                f=0;
                break;
            }
        }
        mn=min(mn,sum);
    }
    if(f)printf("%d\n",mn);
    else puts("-1");
    return 0;
}
