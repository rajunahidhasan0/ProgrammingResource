#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

int main()
{
    int i,j,a,b,ln,ts,f=1,cn=0,n;
    char s[10000];
    //freopen("test.txt","r",stdin);
    scanf("%s",s);
    ln=strlen(s);
    for(i=1;i<ln;i++){
        if(islower(s[i])){
            f=0;
            break;
        }
    }
    if(f){
        for(i=0;i<ln;i++){
            if(islower(s[i])){
                printf("%c",toupper(s[i]));
            }
            else printf("%c",tolower(s[i]));
        }
        puts("");
    }
    else puts(s);

    return 0;
}
