#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;
char s[100009],ar[1009][1009];
int main()
{
    int i,j,a,b,ts,cn=0,n,sq,ln,f;
    freopen("test.txt","r",stdin);

    scanf("%d ",&ts);
    while(ts--){
        gets(s);
        for(i=0,j=0;s[i];i++){
            if(isalpha(s[i])){
                s[j]=s[i];
                j++;
            }
        }
        ln=j;
        s[j]=0;
        sq=sqrt(ln);
        if(sq*sq!=ln){
            f=0;
        }
        else {
            for(i=0;i<ln;i++){
                ar[i/sq][i%sq]=s[i];
            }
            f=1;
            //P(ar[4])
            for(i=0;i<sq;i++){
                for(j=0;j<sq;j++){
                    if(ar[i][j]!=ar[j][i]){
                        f=0;
                    }
                    if(ar[i][j]!=ar[sq-j-1][sq-i-1]){
                        f=0;
                    }
                }
            }

        }
        printf("Case #%d:\n",++cn);
        if(f) printf("%d\n",sq);
        else puts("No magic :(");
    }
    return 0;
}
