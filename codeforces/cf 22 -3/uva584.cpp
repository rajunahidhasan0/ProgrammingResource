#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,ln,sc,x;
    char s[5000];
    freopen("test.txt","r",stdin);
    while(1){
        gets(s);
        sc=0;
        if(!strcmp(s,"Game  Over"))break;
        ln=strlen(s);
        for(i=0;i<ln;i++){
            if(s[i]==' ')continue;
            sc=0;

            if(s[i]=='X'){
                sc+=10;
                x+=2;
            }
            else if(s[i]=='/'){
                sc+=10;
                x+=1;
            }
            else {
            //P(s[i])
                sc+=s[i]-'0';
            }
                if(x>0){
                    sc+=s[i]-'0';
                    x--;
                }

        }
        printf("%d\n",sc);
    }
    return 0;
}
