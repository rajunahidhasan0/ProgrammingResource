#include <bits/stdc++.h>
#define ll long long
#define MS(XX) memset(XX,0,sizeof(XX))
#define MM 10000000
struct mt{
    int a,b,c;
};
using namespace std;
char forbid[27][27][27],vs[27][27][27],s1[5],s2[5];
int lev[27][27][27];
int da[]={1,-1,0,0,0,0};
int db[]={0,0,1,-1,0,0};
int dc[]={0,0,0,0,1,-1};

int bfs(int ma,int mb,int mc)
{
    int i,rm=MM,r=MM,a,b,c;
    queue <mt> q;
    mt str;
    str.a=ma;
    str.b=mb;
    str.c=mc;
    q.push(str);
    vs[ma][mb][mc]=1;
    lev[ma][mb][mc]=0;
    while(!q.empty()){
        str=q.front();
        q.pop();
        ma=str.a;
        mb=str.b;
        mc=str.c;
        if(forbid[ma][mb][mc])return -1;
        if(ma==s2[0]&&mb==s2[1]&&mc==s2[2])return 0;
        for(i=0;i<6;i++){
            a=ma+da[i]+26;
            b=mb+db[i]+26;
            c=mc+dc[i]+26;
            a%=26;
            b%=26;
            c%=26;
            if(!vs[a][b][c]&&!forbid[a][b][c]){
                vs[a][b][c]=1;
                str.a=a;
                str.b=b;
                str.c=c;
                lev[a][b][c]=lev[ma][mb][mc]+1;
                q.push(str);
                if(a==s2[0]&&b==s2[1]&&c==s2[2])return lev[a][b][c];
            }
        }

    }

    return -1;
}
int main()
{
    int i,j,a,b,ts,cn=0,n,r,x,y,z;
    char c1[5000],c2[5000],c3[5000];
    //freopen("test.txt","r",stdin);
    scanf("%d ",&ts);
    while(ts--){
        scanf(" %s %s %d ",s1,s2,&n);
        s2[0]-='a';
        s2[1]-='a';
        s2[2]-='a';
        s1[0]-='a';
        s1[1]-='a';
        s1[2]-='a';
        MS(forbid);
        MS(vs);
        for(i=0;i<n;i++){
            scanf("%s %s %s ",c1,c2,c3);
            for(x=0;c1[x];x++){
                for(y=0;c2[y];y++){
                    for(z=0;c3[z];z++){
                        forbid[c1[x]-'a'][c2[y]-'a'][c3[z]-'a']=1;
                    }
                }
            }
        }

        r=bfs(s1[0],s1[1],s1[2]);
        printf("Case %d: %d\n",++cn,r);
    }
    return 0;
}
