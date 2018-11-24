#include<bits/stdc++.h>
using namespace std;
#define INF INT_MAX
#define MS(arr, val) memset(arr, val, sizeof(arr))
#define MX 20000
int m, n, s, t;
bool vis[MX+5];
int latecy[MX+5];

vector<int>ed[MX+5], ec[MX+5];

int dijkstra(int src)
{
    int res;
    queue<int>Q;
    vis[src]=1;
    latecy[src]=0;
    Q.push(src);
    while(!Q.empty())
    {
        int node=Q.front();
        Q.pop();
        cout<<"Node-->"<<node<<endl;
        if(node==t)return latecy[node];
        for(int j=0 ; j<ed[node].size(); j++)
        {
            int fr=ed[node][j];
            cout<<"Friend: "<<fr<<endl;
            if(latecy[fr] > latecy[node]+ec[node][j])
            {
                latecy[fr]=latecy[node]+ec[node][j];
                if(!vis[fr]) {
                    Q.push(fr);
                    vis[fr]=1;;
                }
            }
        }
    }
    return -1;
}

int main()
{
    int test, tc=0;
    cin>>test;
    while(test--)
    {
        MS(latecy, INF);
        MS(vis, 0);
        for(int i=0; i<=MX; i++){ed[i].clear(); ec[i].clear();}
        scanf("%d %d %d %d", &n, &m, &s, &t);

        int u, v, w;
        for(int i=0; i<m ; i++){
            scanf("%d %d %d", &u, &v, &w);
            ed[u].push_back(v);
            ed[v].push_back(u);
            ec[u].push_back(w);
            ec[v].push_back(w);
        }

        int ans=dijkstra(s);
        if(ans==-1){
            printf("Case #%d: unreachable\n", ++tc);
        }
        else
            printf("Case #%d: %d\n", ++tc, ans);
    }
    return 0;
}
