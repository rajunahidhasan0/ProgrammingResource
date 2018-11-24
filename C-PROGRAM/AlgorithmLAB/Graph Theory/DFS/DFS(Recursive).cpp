
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10010];
bool vis[10010];
void DFS(int v)
{
	vis[v] = true;
	cout << v <<" ";
	for (int i=0; i < adj[v].size(); i++){
        int u=adj[v][i];

		if(!vis[u]){
            DFS(u);
		}
	}
}

int main()
{
    int node, edge, from, to;
    cin >> node >> edge;
    for(int i=0; i<edge; i++)
    {
        cin >> from >> to;
        adj[from].push_back(to);
    }

	for(int i=1; i<=node ; i++){
        if(!vis[i])
            DFS(i);
	}

	return 0;
}
