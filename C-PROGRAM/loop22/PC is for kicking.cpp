#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
vector<int>adj[100002];
int visited[100002];
int level[100002];
int ans;
void bfs(int source)
{
    MS(visited,0);
    MS(level,0);

    queue <int> Q;
    level[source] = 0;
    Q.push(source);
    visited[source] = 1;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            if(visited[adj[u][i]]==0)
            {
                level[adj[u][i]] = level[u]+1;
                Q.push(adj[u][i]);
                visited[adj[u][i]] = 1;
            }
        }
    }
    return;
}



int main()
{
    int n, k,u,v;
    cin>>n>>k;
    for(int i=0 ; i<n-1; i++){
        scanf("%d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(k);
    for(int i=0 ; i<n  ; i++){
        if(ans<level[i])ans = level[i];
    }
    cout<<ans+1<<endl;
    return 0;
}


