#include <bits/stdc++.h>
#define P(X) cout<<"db "<<X<<endl;
#define ll long long
#define rep(i,n) for(i=1;i<=n;i++)
#define Fin freopen("test.txt","r",stdin);
#define MS(XX) memset(XX,0,sizeof(XX));
using namespace std;

struct EDGE{
    int from;
    int to;
    int cost;
    EDGE(){};
    EDGE(int _from, int _to, int _cost){
        from = _from; to = _to; cost = _cost;
    }
};

bool operator < (EDGE A, EDGE B){
    return A.cost > B.cost;
}

void show_tree();
int vis[1003], sow, node, edg;
vector <EDGE> edge[1003];
vector <EDGE> tree[1003];
void PMST(int source);
int main()
{
    freopen("test.txt","r",stdin);
    int t, tc=0;
    scanf("%d", &t);
    while(t--)
    {
        for(int i=0; i<100; i++) {edge[i].clear(); tree[i].clear();}
        scanf("%d %d", &node, &edg);
        int u, v, w;
        for(int i=0 ; i<edg ; i++)
        {
            scanf("%d %d %d", &u, &v, &w);
            edge[u].push_back(EDGE(u, v, w));
            edge[v].push_back(EDGE(v, u, w));
        }

        PMST(1);

        printf("Case %d: %d\n",++tc, sow);
        show_tree();
    }
    return 0;
}

void PMST(int source)
{
    MS(vis)
    sow=0;
    priority_queue< EDGE >Q;
    for(int i=0 ; i<edge[source].size() ; i++)
    {
        Q.push( edge[source][i] );
    }
    vis[source] = 1;
    while(!Q.empty()){
        EDGE f = Q.top();
        Q.pop();
        if( vis[f.to] ) continue;
        vis[f.to] = 1;
        sow += f.cost;

        tree[f.from].push_back(f);
        tree[f.to].push_back( EDGE(f.to, f.from, f.cost) );

        for(int i=0 ; i<edge[f.to].size() ; i++)
        {
            Q.push( edge[f.to][i] );
        }
    }
    return;
}

void show_tree()
{
        for(int i=0 ; i<node ; i++)
        {
            for(int j=0 ; j<tree[i].size() ; j++)
            {

                printf("%d %d %d\n", tree[i][j].from, tree[i][j].to, tree[i][j].cost);
            }
        }
        printf("\n");
    return;
}
