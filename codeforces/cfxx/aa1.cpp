#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))

using namespace std;
char s[101][103];
int main()
{
    int i,j,a,b,ts,f=1,cn=0,n,k;

    //freopen("test.txt","r",stdin);
    scanf("%d%d",&n,&k);
    if(n*n<k)puts("-1");
    else {
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(s[i][j])continue;
                if(i==j){
                    if(k){
                        k--;
                        s[i][j]=1;
                    }
                }
                else {
                    if(k>1){
                        s[i][j]=1;
                        s[j][i]=1;
                        k-=2;
                    }
                }
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<n-1;j++){
                printf("%d ",s[i][j]);
            }
            printf("%d\n",s[i][j]);
        }

    }

    return 0;
}
