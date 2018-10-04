#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
using namespace std;

int main()
{
    int i,j,a,b,ts,cn=0,n,co,cx,d,f;
    char ar[5][5],ch,cg;

    //freopen("test.txt","r",stdin);
    scanf("%d ",&ts);
    while(ts--){
        scanf("%s ",ar[0]);
        scanf("%s ",ar[1]);
        scanf("%s ",ar[2]);

        co=cx=0;
        for(i=0;i<9;i++){
            if(ar[i/3][i%3]=='O')co++;
            if(ar[i/3][i%3]=='X')cx++;
        }
        d=cx-co;
        f=0;
        //P(d)
        cg=-1;
        if(d>=0&&d<2){
            int g=0;
            f=1;
            for(i=0;i<3;i++){
                ch=ar[i][0];
                if(ar[i][1]==ch&&ar[i][2]==ch&&ch!='.'){
                    g++;
                    cg=ch;
                }
            }
            if(g>1)f=0;
            g=0;
            for(i=0;i<3;i++){
                ch=ar[0][i];
                if(ar[1][i]==ch&&ar[2][i]==ch&&ch!='.'){
                    g++;
                    cg=ch;
                }
            }

            if(g>1)f=0;
            ch=ar[1][1];
            if(ar[0][0]==ch&&ar[2][2]==ch){
                cg=ch;
            }
            if(ar[0][2]==ch&&ar[2][0]==ch){
                cg=ch;
            }
            if(cg=='O'&&d){
                f=0;
            }
            else if(cg=='X'&&!d)f=0;
        }


        if(f)puts("yes");
        else puts("no");
    }
    return 0;
}
