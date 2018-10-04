#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
vector<int>adj[105];
int level[1000];
bool visited[1000];
int parent[1000], ans, n;

int bfs(int source)
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
                parent[adj[u][i]] = u;
                visited[adj[u][i]] = 1;
                if(level[adj[u][i]]%2==0)ans++;
            }
        }
    }
    if(ans >= n-ans){
        cout<<ans<<endl;
        return 0;
    }
    else{
        ans = n-ans;
        cout<<ans<<endl;
        return 1;
    }
}
int main()
{
    int test, tc=0, a, b ;
    cin>>test;
    while(test--){
        int k, u, v, t;
        int ar[105]={0};
        for(int i=0 ; i<102 ; i++){adj[i].clear();}

        cin>>n>>k;
        for(int i=0 ; i<k; i++){
            scanf("%d %d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        t = bfs(1);
        for(int i=1; i<=n ; i++){
            if(level[i]%2==t){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}
