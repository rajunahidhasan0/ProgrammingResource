#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define Fin() freopen("input.txt","r",stdin)
#define MS(ARRAY,VALUE) memset(ARRAY,VALUE,sizeof(ARRAY))
vector<int>vt[100005];
int indeg[100005];
int bfs(int source){
    priority_queue <int> Q;
    for(int i=1 ; i<=n ; i++){
        Q.push();
    }
    return 0;
}

int main()
{
    int test, tc=0;
    cin>>test;
    while(test--){
        int n, m, ans=0, u, v;
        MS(mark, 0);
        int ar[100]={0};
        cin>>n>>m;
        for(int i=0 ; i<=m; i++){
            vt[i].clear();
        }
        for(int i=0 ; i<m; i++){
            scanf("%d %d", &u, &v);
            vt[v].push_back(u);
            indeg[v]++;
        }

        for(int i=1 ; i<){

        }

        printf("Case %d: %d\n", ++tc, ans);
    }
    return 0;
}

