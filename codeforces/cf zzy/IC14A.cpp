#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
#define MS(XX) memset(XX,0,sizeof(XX))
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n,ln;
    char s[1000009],c1,c2,ci;
    map <char,char> mp;
    freopen("test.txt","r",stdin);
    scanf("%d ",&ts);
    while(ts--){
        scanf("%[^\n]s",s);
        mp.clear();
        ln=strlen(s);
        scanf("%d ",&n);
        for(i=0;i<n;i++){
            scanf("%c %c ",&c1,&c2);
            //P(c1<<c2)
          // if(c1==c2)
            for(ci='A';ci<='Z';ci++){
                if(mp[ci]==c2){
                    mp[ci]=c1;
                }
            }
            if(!mp[c2])mp[c2]=c1;

        }
        //P(mp['O'])
        for(i=0;i<ln;i++){
            if(mp[s[i]])s[i]=mp[s[i]];
        }
        printf("%s\n",s);
    }
    return 0;
}
