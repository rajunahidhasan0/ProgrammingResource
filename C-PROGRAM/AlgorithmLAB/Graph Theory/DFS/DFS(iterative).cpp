#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10010];
bool vis[10010];
void DFS(int src)
{
	stack<int>st;
	st.push(src);
    vis[src]=1;
    while(!st.empty()){
        int v=st.top();
        st.pop();
        cout<<v<<" ";
        for(int i=0; i<adj[v].size(); i++){
            int w=adj[v][i];
            if(!vis[w]){
                st.push(w);
                vis[w]=1;
            }
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
	cout << "Following is Depth First Traversal"
			" (starting from vertex 2) \n";

	for(int i=1; i<=node ; i++){
        if(!vis[i])
            DFS(i);
	}

	return 0;
}
