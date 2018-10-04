#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n,ln,f=0;
    char s1[100];
    FO
    freopen("test.txt","r",stdin);
    scanf("%d ",&ts);
    while(ts--){
    if(cn)puts("");
        scanf("%s",s1);
        //puts(s1);
        ln=strlen(s1);
        for(i=1;i<=ln;i++){
            if(ln%i)continue;
            for(j=0;j<ln;j++){
                if(s1[j]!=s1[j%i])break;
                //P(s1[j]<<s1[j%i]<<" "<<i<<" "<<j%i)
            }

            if(j==ln)break;
        }
        cn++;
        printf("%d\n",i);
    }
    return 0;
}
