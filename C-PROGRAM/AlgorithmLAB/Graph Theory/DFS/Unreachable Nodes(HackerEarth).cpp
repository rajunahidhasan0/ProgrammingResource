
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100100];
bool vis[100100];
void DFS(int v)
{
	vis[v] = true;
	///cout << v <<" ";
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
        adj[to].push_back(from);
    }
    int x, ans=0;
    cin>>x;
    DFS(x);
	for(int i=1; i<=node ; i++){
        if(!vis[i]){
            ans++;
        }
	}
    printf("%d\n", ans);
	return 0;
}
