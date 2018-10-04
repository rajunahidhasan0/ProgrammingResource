#include<bits/stdc++.h>
using namespace std;
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))

int fr[] = {1,1,0,-1,-1,-1,0,1};
int fc[] = {0,1,1,1,0,-1,-1,-1};

int level[102][102];
bool vis[102][102];

int o, n, m;
string st[102];
bool valid(int X,int Y,int R,int C){ if( X>=0 && X<R && Y>=0 && Y<C && st[X][Y]!='#' && !vis[X][Y])return 1; return 0;}
struct node{
    int row;
    int col;
    node(){}
};
bool bfs(int u, int v)
{
    node N;
    N.row=u;
    N.col=v;
    queue<node>Q;
    Q.push(N);
    vis[u][v]=1;
    level[u][v]=0;

    while(!Q.empty())
    {
        node p=Q.front();
        Q.pop();
        for(int i=0 ; i<8 ; i++)
        {
            node q;
            q.row=p.row+fr[i];
            q.col=p.col+fc[i];
            int rw=q.row , cl=q.col;
            if( !valid(rw, cl, m, n) )continue;
            if(st[rw][cl]=='T'){
                if(level[p.row][p.col]+1 <= o)return 1;
                else return 0;
            }
            Q.push(q);
            level[q.row][q.col]=level[p.row][p.col]+1;
            vis[q.row][q.col]=1;
        }
    }
    return 0;
}
int main()
{
    int test;
    ///freopen("test.txt", "r", stdin);
    cin>>test;
    while(test--)
    {
        for(int i=0; i<101; i++)st[i].clear();
        cin>>o>>m>>n;
        getchar();
        int X, Y, tt=0;
        for(int i=0; i<m ; i++)
        {
            getline(cin, st[i]);
        }
        for(int i=0; i<m ; i++)
        {
            for(int y=0 ; y<n; y++){
                if(st[i][y]=='S'){
                    X=i; Y=y;
                }
            }
        }
        MS(level,0);
        MS(vis,0);
        tt=bfs(X, Y);
        if(tt)cout<<"Possible"<<endl;
        else cout<<"Impossible"<<endl;
    }
    return 0;
}
