#include <bits/stdc++.h>
#define MS(XX) memset(XX,0,sizeof(XX))
#define pii pair<int , int>
using namespace std;


int vis[15][15], lev[15][15], m, n, get, ans;
int xx[10]={1,1,2,2,-1,-1,-2,-2}, yy[10]={2,-2,1,-1,2,-2,1,-1}, x, y;

int valid(int y, int z)
{
    if(vis[y][z])return 0;
    else if(y<0 || z<0)return 0;
    else if(y>m-1 || z>n-1)return 0;
    return 1;
}

int bfs(int sx, int sy, string st[])
{
    queue <pii> Q;
    MS(vis);
    ///MS(lev);
    vis[sx][sy]=1;
    lev[sx][sy]=0;
    Q.push( pii(sx,sy) );
    int Ans=0;
    while(!Q.empty())
    {
        pii(f)=Q.front();
        Q.pop();
        int u, v;
        u=f.first; v=f.second;

        if(st[u][v]!='.')
        {
                double l = lev[u][v], step = st[u][v]-'0';
                Ans += ceil(l / step);
                st[u][v] = '.';
        }


        for(int j=0 ; j<8 ; j++)
        {
            if( valid(u+xx[j], v+yy[j]) ){
                Q.push( pii(u+xx[j], v+yy[j]) );
                vis[ u+xx[j] ][ v+yy[j] ]=1;
                lev[u+xx[j]][v+yy[j]] = lev[u][v]+1;
            }
        }
    }
    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(st[i][j]!='.') return INT_MAX;
        }
    }
    return Ans;
}
int main()
{
    int test, tc=0, i;
   /// freopen("test.txt","r",stdin);
    scanf("%d", &test);
    while(test--){
        int i, j, ans=INT_MAX;
        scanf("%d %d", &m, &n);
        string s[16];
        for(i=0 ; i<m ; i++)
                cin>>s[i];

        for(i=0 ; i<m ; i++)
            for(j=0 ; j<n ; j++)
            {
                string sc[16]=s;
                ans = min(ans, bfs(i, j, sc) );
            }

        if(ans==INT_MAX) printf("Case %d: %d\n", ++tc, -1);

        else printf("Case %d: %d\n", ++tc, ans);
    }
    return 0;
}

