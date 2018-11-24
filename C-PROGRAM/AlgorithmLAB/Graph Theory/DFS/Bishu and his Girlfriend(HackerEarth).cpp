

#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10010];
bool vis[10010];
int level[10010];
void DFS(int v)
{
	vis[v] = true;
	//cout << v <<" ";
	for (int i=0; i < adj[v].size(); i++){
        int u=adj[v][i];

		if(!vis[u]){
            DFS(u);
            level[u]=level[v]+1;
		}
	}
}

int main()
{
    int node, edge, from, to;
    cin >> node;
    edge=node-1;
    for(int i=0; i<edge; i++)
    {
        cin >> from >> to;
        adj[from].push_back(to);
    }
    level[1]=0;
    DFS(1);
    int minlvl=node;
    int Q, q[node+1], x;
    cin>>Q;
	for(int i=0; i<Q ; i++){
        scanf("%d", &q[i]);
        x=q[i];
        if(level[x]<minlvl){
            minlvl=level[x];
        }
	}
	sort(q, q+Q);
    for(int i=0; i<Q ; i++){
        if(level[q[i]]==minlvl){
            printf("%d\n", q[i]);
            break;
        }
	}
	return 0;
}
